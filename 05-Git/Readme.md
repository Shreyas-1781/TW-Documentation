# Git

## 1. Introduction

Git is a distributed version control system used to track changes in files and manage project history.

It allows developers to:
- Track modifications in source code.
- Restore previous versions.
- Work on different features independently.
- Collaborate with other developers.
- Maintain a history of project changes.

## 2. Git Architecture

Git mainly works with three areas:

1. **Working Directory:** Contains the project files being edited.
2. **Staging Area (Index):** Contains changes selected for the next commit.
3. **Local Repository:** Stores committed changes and project history.

A remote repository, such as GitHub, allows developers to share their work online.

## 3. Git Installation and Configuration

After installing Git, verify it using:

```bash
git --version
```

Configure the author name and email:

```bash
git config --global user.name "Your Name"
git config --global user.email "your@email.com"
```

View the configuration:

```bash
git config --global --list
```

These settings identify the author of commits.

## 4. Creating a Repository

Create a project folder:

```bash
mkdir my-project
cd my-project
```

Initialize Git:

```bash
git init
```

Git creates a hidden `.git` directory that stores repository information and history.

## 5. Basic Git Commands

### Checking Repository Status

```bash
git status
```

Displays modified, untracked and staged files.

### Adding Files to the Staging Area

```bash
git add filename
```

Add all changes:

```bash
git add .
```

### Committing Changes

```bash
git commit -m "Commit message"
```

A commit permanently records the staged changes in the local repository history.

### Viewing Commit History

```bash
git log
git log --oneline
git log --oneline --all --graph
```

These commands display commit history in different formats.

### Comparing Changes

```bash
git diff
```

Displays unstaged changes.

```bash
git diff --staged
```

Displays staged changes compared with the last commit.

## 6. Undoing Changes

### Unstaging a File

```bash
git restore --staged filename
```

Removes a file from the staging area without deleting its modifications.

### Discarding Uncommitted Changes

```bash
git restore filename
```

Restores a tracked file and discards its unstaged modifications.

**Warning:** This can permanently discard local changes.

### Reverting a Commit

```bash
git log --oneline
git revert COMMIT_ID
```

Creates a new commit that reverses the changes introduced by an earlier commit while preserving existing history.

## 7. GitHub

GitHub is an online platform that hosts Git repositories and provides collaboration features.

### Git vs GitHub

| Git | GitHub |
|---|---|
| Version control system | Online hosting platform |
| Works locally | Works online |
| Tracks file changes | Hosts repositories |
| Manages commits and branches | Supports pull requests and issues |

### Creating a GitHub Repository

Create a new repository on GitHub and connect it to your local repository.

Add a remote:

```bash
git remote add origin REPOSITORY_URL
```

Check remote connections:

```bash
git remote -v
```

Here, `origin` is the conventional name given to the remote repository.

### Pushing Code to GitHub

```bash
git branch -M main
git push -u origin main
```

- `git branch -M main` renames the current branch to main.
- `git push` uploads local commits.
- `-u` establishes an upstream tracking relationship.

### Cloning a Repository

```bash
git clone REPOSITORY_URL
```

Cloning downloads a remote repository, including its files and commit history.

### Fetching and Pulling Changes

```bash
git fetch origin
```

Downloads remote updates without integrating them into the current branch.

```bash
git pull
```

Fetches and integrates remote changes into the current branch.

## 8. Branching in Git

A branch is an independent line of development. It allows developers to work on new features without directly modifying the main branch.

### Listing Branches

```bash
git branch
```

### Creating a Branch

```bash
git branch feature
```

### Renaming a Branch

```bash
git branch -m old-name new-name
```

### Switching Branches

```bash
git switch feature
```

The older alternative is:

```bash
git checkout feature
```

### Creating and Switching to a New Branch

```bash
git switch -c feature
```

### Deleting a Branch

```bash
git branch -d feature
```

### Merging Branches

To merge a feature branch into main:

```bash
git switch main
git merge feature
```

The target branch is the branch currently checked out.

## 9. Merge Conflicts

A merge conflict occurs when Git cannot automatically combine changes from different branches.

Common causes:
- Two developers modify the same lines.
- A file is modified in one branch and deleted in another.
- Changes are incompatible.

Example conflict:

```text
<<<<<<< HEAD
result = 10
=======
result = 20
>>>>>>> feature
```

### Resolving a Merge Conflict

1. Open the conflicting file.
2. Decide which changes to keep or combine.
3. Remove the conflict markers.
4. Save the file.
5. Stage the resolved file.
6. Complete the merge with a commit if Git has not already completed it.

Commands:

```bash
git status
git add filename
git commit
```

## 10. Merge vs Rebase

Both commands integrate changes from different branches.

**Merge:**

```bash
git switch main
git merge feature
```

- Combines branch histories.
- Preserves existing commits.
- May create a merge commit.

**Rebase:**

```bash
git switch feature
git rebase main
```

- Replays feature commits on top of the main branch.
- Creates a more linear history.
- Rewrites commit identities.

Rebasing shared commits should be avoided unless the team understands the consequences.

## 11. GitHub Pull Requests

A Pull Request (PR) proposes changes from one branch to another on GitHub.

Typical workflow:

1. Create a feature branch.
2. Modify and test the files.
3. Commit the changes.
4. Push the feature branch.
5. Open a Pull Request on GitHub.
6. Request a review.
7. Merge the approved changes.

A Pull Request is different from the `git pull` command. A PR is a collaboration and review feature on GitHub.

## 12. Forking a Repository

A fork creates a separate copy of another user's repository under your GitHub account.

It is useful when contributing to projects that you do not own.

Typical workflow:

1. Fork the original repository on GitHub.
2. Clone your fork locally.
3. Make changes.
4. Push changes to your fork.
5. Create a Pull Request to the original repository.

### Fork vs Clone

| Fork | Clone |
|---|---|
| Creates a hosted copy | Creates a local copy |
| Happens on GitHub | Happens on your computer |
| Supports independent contributions | Supports local development |

## 13. Git Tags and Releases

A tag identifies a specific point in repository history, usually representing a software version.

List tags:

```bash
git tag
```

Create an annotated tag:

```bash
git tag -a v1.0.0 -m "Version 1.0.0"
```

View a tag:

```bash
git show v1.0.0
```

Push a tag:

```bash
git push origin v1.0.0
```

Semantic versioning commonly follows:

**MAJOR.MINOR.PATCH**

GitHub Releases can attach release notes and downloadable files to a version tag.

## 14. GitHub Issues and Projects

### GitHub Issues

Issues are used to:
- Report bugs.
- Suggest new features.
- Assign tasks.
- Discuss project requirements.

### GitHub Projects

Projects help organize and track work using boards or tables.

Common task statuses include:
- Todo
- In Progress
- In Review
- Done

Issues and Pull Requests can be linked to project tasks.

## 15. Authentication and Security

GitHub supports HTTPS and SSH authentication.

Important security practices:
- Use a Personal Access Token when required for HTTPS authentication.
- Protect SSH private keys.
- Never commit passwords, API keys or private tokens.
- Use `.gitignore` for sensitive local configuration files.
- Check repository visibility and access permissions.

Adding a secret to `.gitignore` does not remove it from Git history if it has already been committed.

## 16. Common Git Errors

| Problem | Possible Solution |
|---|---|
| Untracked files | Use `git add` |
| Push rejected | Fetch and integrate remote changes |
| Merge conflict | Resolve conflicting files manually |
| Wrong branch | Check using `git branch` |
| Nothing to commit | Inspect using `git status` |
| Authentication failed | Check credentials and repository permissions |

## 17. Git Best Practices

1. Commit changes frequently.
2. Write meaningful commit messages.
3. Use descriptive branch names.
4. Review changes before committing.
5. Pull or fetch updates regularly.
6. Test changes before merging.
7. Keep secrets and unnecessary generated files out of the repository.
8. Maintain a useful README file.

## 18. Conclusion

Git helps developers manage project history, track changes and collaborate efficiently. GitHub extends these capabilities through online repositories, Pull Requests, Issues and project management tools.git status