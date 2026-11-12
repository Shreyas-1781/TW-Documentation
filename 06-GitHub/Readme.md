# GitHub Documentation

## 1. What is GitHub?

GitHub is a cloud-based platform used to host Git repositories. It allows developers to store code, track changes, collaborate and manage software projects.

## 2. Git vs GitHub

| Git | GitHub |
|---|---|
| Version control system | Online hosting platform |
| Works locally | Works over the internet |
| Tracks file changes | Hosts Git repositories |
| Supports branching and merging | Supports collaboration and pull requests |

## 3. GitHub Repositories

A repository is a location where project files and their version history are stored.

Repositories can be:
- **Public:** Anyone can view the repository.
- **Private:** Access is restricted to permitted users.

A README.md file provides an overview of the project, its purpose and instructions.

## 4. Creating and Managing Repositories

A repository can be created through the GitHub website.

To connect a local repository to GitHub:

```bash
git remote add origin REPOSITORY_URL
git branch -M main
git push -u origin main
```

To view remote connections:

```bash
git remote -v
```

## 5. Cloning and Forking

**Cloning:** Creates a local copy of an existing repository.

```bash
git clone REPOSITORY_URL
```

**Forking:** Creates a separate copy of another user's repository under your GitHub account.

Cloning is commonly used to download a project, while forking is useful for contributing to projects.

## 6. Pull Requests

A Pull Request (PR) allows developers to propose changes from one branch to another.

Typical workflow:

1. Create a new branch.
2. Make changes.
3. Commit and push the changes.
4. Open a Pull Request on GitHub.
5. Review the proposed changes.
6. Merge the Pull Request.

Pull Requests support code review and collaboration.

## 7. GitHub Issues

Issues are used to track:
- Bugs and errors.
- New features.
- Tasks and improvements.
- Questions and discussions.

They help organise project work and assign responsibilities.

## 8. GitHub Projects

GitHub Projects helps manage tasks using boards, tables and roadmaps.

Common task stages include:
- Todo
- In Progress
- In Review
- Done

Projects can be linked with Issues and Pull Requests.

## 9. Authentication and Security

GitHub supports authentication through:
- HTTPS with Git Credential Manager or Personal Access Tokens when required.
- SSH keys.

Security best practices:
- Never upload passwords or API keys.
- Use `.gitignore` to exclude unnecessary files.
- Keep authentication credentials private.
- Use appropriate repository permissions.

## 10. Conclusion

GitHub provides an effective platform for hosting repositories, collaborating with developers, reviewing code and managing software projects. Combined with Git, it makes version control and teamwork easier.