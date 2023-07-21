import re
def add(*a):
    return a[0]+a[1]
def sub(*a):
    return a[0]-a[1]
def mul(*a):
    return a[0]*a[1]
def div(*a):
    return a[0]/a[1]
switch=1
while switch >0:
    if switch==1:
        inputValue=input("Hello, Please Enter Your Input Numbers With Your Desire Oparation \n")
        inputNum=re.findall('[0-9]+', inputValue)
        if '+'in inputValue:
            value=add(int(inputNum[0]),int(inputNum[1]))
            print(inputValue+" = "+str(value))
        elif '-' in inputValue:
            value=sub(int(inputNum[0]),int(inputNum[1]))
            print(inputValue+" = "+str(value))
        elif '*' in inputValue:
            value=mul(int(inputNum[0]),int(inputNum[1]))
            print(inputValue+" = "+str(value))
        elif '/' in inputValue:
            value=div(int(inputNum[0]),int(inputNum[1]))
            print(inputValue+" = "+str(value))
        else:
            print("Warning!\nPlese Enter A Valid Oparator To Perform Calculation!\n")
        switch=int(input("(1) Do You Wanna Continue? \n(0) Exit\nPlease Enter The Number For What Do you Wanna Do: "))
        if switch==0:
            print("Thank You")
    elif switch !=1|0:
        print("Warning!\nPlese Enter A Valid Number To Perform Calculation Or Exit!\n")
        switch=int(input("(1) Do You Wanna Continue? \n(0) Exit\nPlease Enter The Number For What Do you Wanna Do: "))
        if switch==0:
            print("Thank You")

    
        