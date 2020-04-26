if __name__ == "__main__":

    file = open("txt.txt","r+")
    for line in file:
        print(line)
    file.write("\nneue Zeile")
    file.seek(0,0)
    print(file.read())