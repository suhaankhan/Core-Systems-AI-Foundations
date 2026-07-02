# Git Core Commands

- `git init` -> Starts a new local repository.
- `git status` -> Shows what files are modified/staged.
- `git add <file>` -> Moves files to the staging area.
- `git commit -m "message"` -> Saves a snapshot of the staged changes.
- `git log` -> Shows a chronological history of all commits made in the repository.
- `git restore --staged <file>` -> Unstages a file, keeping your local changes intact.
- `git reset <commit_id>` -> Reverts the repository back to a specific commit id.

## Stashing Commands (Temporary Storage)
- `git stash` -> Temporarily shelves (hides) uncommitted changes so you can work on a clean branch.
- `git stash pop` -> Restores the most recently stashed changes back into your working directory.
- `git stash clear` -> Permanently deletes all stashed records from your local storage.

## Remote Collaboration (Open Source Workflows)
- `git remote add origin <url>` -> Connects your local repository to your personal remote repository on GitHub.
- `git remote add upstream <url>` -> Connects your local repository to the original open-source project repository[cite: 1].
- `git remote -v` -> Lists all configured remote connections and their URLs (verifies where you are pushing/pulling).

## Branching & Merging
- `git branch <branch_name>` -> Creates a new isolated timeline (branch) with the specified name.
- `git checkout <branch_name>` -> Switches your active workspace to the specified branch.
- `git merge <branch_name>` -> Merges the history and changes of the specified branch into your current active branch.

## General Terminal & Text Editing Commands
- `ls -a` -> Shows all files in the current directory, including hidden files (like the `.git` folder).
- `ls .git` -> Inspects the hidden internal Git directory where local history, configuration, and object hashes live.
- `cat <file>` -> Displays the entire contents of a file directly in the terminal window.
- `vi <file>` -> Opens a file inside the Vim text editor directly within your terminal window.
- `rm -rf <file/folder>` -> Forcefully and permanently deletes a file or folder (use with extreme caution!).