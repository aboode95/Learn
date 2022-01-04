import serial

arduino_port = "com12"
baud = 9600
fileName="buttonRead.csv"
samples=10
print_label= False

ser = serial.Serial(arduino_port, baud)
print("Connected to Arduino port:" + arduino_port)
file = open(fileName, "w")
print("Created file")

line = 0

while line <= samples:
    if print_label:
        if line ==0:
            print("Printing Column Headers")
        else:
            print("Line " + str(line) + ": writing...")
    getData=str(ser.readline())
    data=getData[0:][:-2]
    print(data)

    file = open(fileName, "a")
    file.write(data + "\\n")
    line = line+1

print("Data collection complete!")
file.close()
    
                
