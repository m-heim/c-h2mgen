import sys
import re
import string
def main(file: str) -> bool:
    with open(file, "r") as f:
        content = f.read().splitlines()
        content = list(map(lambda x: x.strip(), content))
        content = list(filter(lambda x: not x == "", content))
        content = list(filter(lambda x: x[0] in string.ascii_letters + "_}{", content))
        print("".join(content))
        enums = re.findall(r"(typedef?\s+enum|enum)(?:\s+)(\w+)(?:\s*{)((\w+,*)+)(?:})", "".join(content))
    print(enums)
    with open(file[:-2] + "enumfunc.c", "w") as f2:
        f2.write("#include \"" + file + "\"\n\n\n\n")
        for match in enums:
            consts = match[2].split(",")
            typename = "enum " if match[0] == "enum" else ""
            typename += match[1]
            f2.write("const char *" + match[1] + "_name(" + typename + " " + "item" + ") {\n")
            print(str(len(match)))
            for i, item in enumerate(consts):
                if i == 0:
                    f2.write("\tif")
                else:
                    f2.write("\telse if")
                f2.write("(item == " + item.removesuffix(",") + ") {\n\t\treturn \"" + item.removesuffix(",") + "\";\n\t}")
            f2.write("\t else {\n\t\t return \"notdefnd\";\n\t}\n")
            f2.write("}\n")
if __name__ == '__main__':
    main(sys.argv[1])
