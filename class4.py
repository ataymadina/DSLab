
class Demo:
    def m1(self,no1=None,no2=None):
        if(no1==None or no2==None):
            print("None")
        else:
            print("hello")

d=Demo()
d.m1()
d.m1(3)
d.m1(5,7)
