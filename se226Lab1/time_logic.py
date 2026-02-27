
x=input("Enter a large integer:\n")
hour= int(x)//3600
minutes= (int(x)-hour*3600)//60
seconds= (int(x)-hour*3600-minutes*60)
print(x+"Seconds is "+ str(hour)+" hours, "+str(minutes)+" minutes, "+str(seconds)+" seconds")