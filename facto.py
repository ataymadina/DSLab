def facto(no):
    fact=1
    for i in range(1,no+1):
        fact=fact*i
    return fact
def main():
    no=int(input("Enter the no"))
    result=facto(no)
    print("factorial =",result)
main()
