git filter-branch --commit-filter '
                GIT_COMMITTER_NAME="nikalexey";
                GIT_AUTHOR_NAME="nikalexey";
                GIT_COMMITTER_EMAIL="email@domain.com";
                GIT_AUTHOR_EMAIL="email@domain.com";
                git commit-tree "$@";
' HEAD
