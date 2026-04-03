
def factorial(x):
    if x == 0:
        return 1
    if x == 1:
        return 1
    return x * factorial(x-1)


###########################################

av = lambda x,i: (x**(2*i))/factorial(2*i)

def exp_x(x, n):
    sum =0
    for i in range(n):
        sum += ((-1)**i)*av(x,i)

    return sum
###########################################

sum=0

def Gn(n,r):
    """ This recursive function start to sum from r**n and recursively decrease n by 1 until n equal to 0, finally sum with 1 """
    global sum

    if n == 0:
        sum += 1
    else:
        sum += r ** n
        Gn(n - 1, r)

print(exp_x(2,3))





