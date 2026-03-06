
fc=0
bc=0
fbc=0
while True:
    x=input("Please enter a number between 10 and 100: ")
    if x>100 or x<10:
        print("Invalid input")
    else:
        break

for i in range(1,x+1):
    if x//7==0:
        print(i+"is skipped)")
        continue
    elif x//15==0:
        print("FizzBuzz")
        fbc + 1
        continue
    elif x//3==0:
        print("Fizz")
        fc +1
        continue
    elif x//5==0:
        print("Buzz")
        bc+1
        continue
    else:
        print(i)

print("--- Summary ---")
print("Fizz count: "+ str(fc))
print("Buzz count: "+ str(bc))
print("FizzBuzz count: "+ str(fbc))