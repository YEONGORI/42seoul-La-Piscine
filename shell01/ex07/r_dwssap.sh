cat /etc/passwd | sed '/^#/d' | sed -n 'n; p' | sed 's/:.*//' | rev | sort -r | sed -n "${FT_LINE1},${FT_LINE2}p" | awk '{printf("%s, ",$1)}' | sed 's/, $/./' | tr -d  '\n'
