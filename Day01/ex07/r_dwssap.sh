cat /etc/passwd | egrep -v "^\s*(#|$)" | sed -n '1!n;p' | cut -d ':' -f 1 |rev | sort -r | sed -n '1,2p' | sed 'N;s/\n/ /' | sed 's/ /, /g' | tr '\n' '.\n'
