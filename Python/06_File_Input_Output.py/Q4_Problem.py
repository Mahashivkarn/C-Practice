word ="Donkey"

with open("files.txt","r") as f:
    content =f.read()
    
new =content.replace(word,"######")

with open("files.txt","w") as f:
    f.write(new)