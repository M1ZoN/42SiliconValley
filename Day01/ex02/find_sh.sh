find . -name '*.sh' -type f | sed 's/\.sh//g' | rev | cut -d '/' -f 1 | rev
