Flower = ["Rose", "Sunflower", "Marigold"]
print(Flower)  #How to print list
print(type(Flower)) #Check type
print(len(Flower))#Check length
if "Rose" in Flower: #Check if an item is present in the list
    print("Rose ia a part of list")
    if "Jasmine" not in Flower:#Check if an iten is not present in list
        print("Jasmine is not in list.")
        print(Flower[2]) #indexing in list
        print(Flower[-3]) #negative indexing
        print(Flower[1:3])#Range of index
        print(Flower[-3:-1])#negative range of index

    Flower.append("Lilly") #adds item to the end of the list
    print(Flower)
    Flower.insert(4, "Lotus")#adds item to the given i. e 4 index
    print(Flower)
    more_Flower = ["Hibiscus", "Daisy"]
    Flower.extend(more_Flower)#insert more_Flower to the append
    print(Flower)
    Flower.remove("Hibiscus")#remove specific items
    print(Flower)
    Flower.pop()#rempves item present at the end
    print(Flower)
    Flower[1] = ("Lilly")#Change item of index 1 and insert Lilly at the index 1.
    print(Flower)
    Flower[2:3] = ("Dandilion", "Saffron")#Change item of range 2:3 and puts the given item.
    print(Flower)

    Flower.sort()#Sorting a list in ascending order
    print(Flower)
    Flower.sort(reverse = True) #Sorting a list in decending order
    print(Flower)
    Flower.reverse()
    print(Flower)

    #List Comprehension
      #When we want to make a new lost from item of an existing list.
    new_Flower = [Flower for Flower in Flower if "a" in Flower]
    print(new_Flower)
    Flower = Flower + new_Flower #Concating a list
    print(Flower)
    Flower.copy()
    print(Flower)

    