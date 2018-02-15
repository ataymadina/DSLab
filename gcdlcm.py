n1=int(input("enter the no1"))
n2=int(input("enter the no2"))
a=n1
b=n2
while(n1!=n2):
    if(n1>n2):
        n1=n1-n2
    else:
        n2=n2-n1
print("%d is the gcd of two no"%n1)
lcm=(a*b)/n1
print("%d is the lcm of two no"%lcm)

