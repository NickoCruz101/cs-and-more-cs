
I have a list of (n) candies. Where (b) candies are bad.
The Goal is to sort out the good candies from the bad.

We have a machine that cost $1 to use, that tells us if any bad candies were found in the input.

let 'input => output' represent the process of placing a pile of candy into the machine.

## Notes



## Method 1

### overview
    split the group in half and countinue to do so until the bad have all been sorted out



### Case 1A
suppose I am always given two bad candies. b = 2.

When given (n = 4), {c,c,b,b}. c: good candies, b: bad

we can slpit the pile into 2 groups

pileA = {c,c} 
pileB = {b,b}

place each group in the machine. cost: $2

pileA => 'Good'
pileB => 'Bad'

If the amount of Bad candies are given before sorting then since each of our groups in this case only consist of 2 elements.

we must know that pileB contains all the Bad candies.

and our candies have been sorted. with a total cost of $2

### Case 2A

{c,b,c,b}, n = 4 , b = 2, but bad candies are in both piles.

split()

pileA = {c,b}
pileB = {c,b}

pileA => 'Bad'
pileB => 'Bad'

split()

pileA
    pileC = {c}
    pileD = {b}

pileB
    pileE = {c}
    pileF = {b}


since PileA and PileB both contain a bad candy we only need to test one of the subset of piles. since if one tests 'Bad' this implies the other tests 'Good'.


pileC => 'Good' , which implies pileD contains the 'Bad'

pileF => 'Bad' , which implies pileE contains the 'Good'


Total Cost: $4 


### Case 1B

n = 8, b = 2

{c,c,c,b,c,c,c,b}

pA = {c,c,c,b}
pB = {c,c,c,b}

pA => 'Bad'
pB => 'Bad'

    cost: $2, nothing gained

pA
    p_a1 = {c,c}
    p_a2 = {c,b}

    cost: $2, 
        - +2 good candies found
        - We now know that one of the elements in p_a2 is 'bad'

pB
    p_b1 = {c,c}
    p_b2 = {c,b}

p_a1 => 'Good' 
p_a2 => 'Bad'


p_b1 => 'Good'
p_b2 => 'Bad'



## Method 2

### summary
we split n candies into (n/b) groups. Where b is the number of bad candies.

### Case1A
    n = 16, b = 4
    n = {1,2,3,x,5,6,x,8,9,10,x,12,13,14,15,x}, x: bad candies

we create 4 piles each of 4 candies

    pileA = {1,2,3,x} => 'Bad'
    pileB = {5,6,x,8} => 'Bad'
    pileC = {9,10,11,12} => 'Good'
    pileD = {13,14,15,x} => 'Bad'

    cost: $4 

theres two different ways we can go from this point.

we can continue dividing each pile in half until we isolate the bad

    p_a1 = {1,2} => 'G'
    p_a2 = {3,x} => 'B', {3} => 'Good'

we have 3 bad piles and worst case has a cost of $3 per pile

    cost $16







## Method 3

Two at a time

If I had 100 candies 