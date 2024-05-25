with open('encodedtext.txt', 'r') as file:
     ftext = file.readline()
     while ftext:
          for c in ftext:
               if c == "4":
                    print(ftext)
          break
     
          