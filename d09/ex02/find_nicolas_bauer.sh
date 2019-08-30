cat $1 | grep -i "nicolas\tbauer" | rev | cut -d "	"  -f 2 | rev | grep -e "-"
