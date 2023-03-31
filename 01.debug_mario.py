#Code below builds a pyramid of # symbols, but -1 of the input value
#"i" starts at 0, so when Input is 3, it prints 0, 1, 2 and the 3 itself won't. So 1 # symbol misses

def main():
    height = int(input("Height: "))
    pyramid(height)
    
def pyramid(n):
    for i in range(n):
        # comment b/c it's for testing -print(i, end= " ")- #addition to code to check if "i" is the problem.
        print("#" * (i + 1)) # change "i" to (i + 1) fixes the issue
        
if __name__ == "__main__":
    main()
    
#Debugging: Set breakpoint L14, then "Step Into"(arrow down symbol F11), highlights L5 b/c no variable exist yet
#"Step Over"(arrow right F10), prompted for Input. Left Panel now shows locals variable
# "Step Into" again. Panel shows "n" value given by Input, which is as expected. So for look might be problem
# "Step Over" shows now "i" variable as 0. L9 now is executed and terminal jumps 1 line down without showing a #