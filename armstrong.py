n=int(input("Enter the no"))
sum=0

temp=n
while(n!=0):
    rem=n%10
    sum=sum+(rem*rem*rem)
    n=n//10
if(sum==temp):
    print("%d is armstrong no"%temp)
else:
    print("%d is not armstrong no"%temp)

