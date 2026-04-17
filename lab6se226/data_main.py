import data_package


input=input("Enter a comma-separated list of numbers (e.g., 12, 5, 12, 8 , 21): ")
list=input.split(",")

newlist=data_package.strip_whitespaces(list)

numlist=[]

for x in newlist:
    if x != "":
        numlist.append(float(x))

nlist=data_package.remove_duplicates(numlist)

print("Cleaned and unique data: ")
print(nlist)
print("-----------------------------------------------")

print("Mean: ",float(data_package.calculate_mean(nlist)))

print("Maximum: ",float(data_package.find_maximum(nlist)))

print("Maximum: ",float(data_package.find_minimum(nlist)))




