find `pwd`  \( -type f -or -type d \) -name '.*'  -prune -or -print | wc -l | sed 's/ //g'
