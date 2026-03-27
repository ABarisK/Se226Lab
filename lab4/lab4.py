userNum = int(input("Enter number of users: "))
userDic ={}
for i in range(userNum):
    userName = input("Enter username: ")
    itemNum = int(input("How many items? "))
    itemList = []
    for j in range(itemNum):
        itemName = input("Item "+ str(j+1)+": ")
        itemList.append(itemName)

    userDic.update({userName : itemList})
    print()

print("USER DATA: ")
for key in userDic.keys():
    print(str(key)+" -> "+str(userDic[key]))

allItems = set()
commonItems = set()

for values in userDic.values():
    currentItems = set(values)

    commonItems.update(allItems.intersection(currentItems))

    allItems.update(currentItems)

uniqueItems = allItems.difference(commonItems)


print("\nCOMMON ITEMS:")
for item in commonItems:
    print(item)

print("\nUNIQUE ITEMS:")
for item in uniqueItems:
    print(item)

print("MOST POPULAR ITEM: ")
