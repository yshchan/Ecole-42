cat /etc/passwd | sed "/^#/d" | sed -n "g;n;p" | cut -d : -f1 | rev | sort -r | sed -n -e "$FT_LINE1,${FT_LINE2}p" | sed "s/$/,/" | tr '\n' ' ' | sed "s/, $/./" | tr -d "\n"
