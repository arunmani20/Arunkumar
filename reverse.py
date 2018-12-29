a=str(input())
new=''
for i in a: 
    if (i.isupper()) == True: 
        new+=(i.lower()) 
    elif (i.islower()) == True: 
      
        new+=(i.upper()) 
print(new)
