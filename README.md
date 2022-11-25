# DAA-ASSIGNMENT-2
## Implementation of Cuckoo Hashing.
### Cuckoo Hashing : 

1.Cuckoo hashing is a type of hashing wh?re two hash functions hl and h2 are used such that each of the key can hash to two possible locations.

2.Cuckoo hashing is a scheme in computer programming for resolving hash collisions of values of hash functions in a table, with worst-case constant lookup time.

3.Cuckoo hashing applies the idea of multiple-choice and relocation together and guarantees O(1) worst case lookup time! 

###### 1.Multiple-choice: We give a key two choices the h1(key) and h2(key) for residing.
###### 2.Relocation: It may happen that h1(key) and h2(key) are preoccupied. This is resolved by imitating the Cuckoo bird: it pushes the other eggs or young out of the nest when it hatches. Analogously, inserting a new key into a cuckoo hashing table may push an older key to a different location. This leaves us with the problem of re-placing the older key. 

###### Input:
```
{20, 50, 53, 75, 100, 67, 105, 3, 36, 39}
```
###### Hash Function:
```
h1(key) = key%11
h2(key) = (key/11)%11
```
![Image](https://media.geeksforgeeks.org/wp-content/cdn-uploads/ch1.png)

###### Insert 20 at h1(20):
![Image](https://media.geeksforgeeks.org/wp-content/cdn-uploads/ch2.png)

###### Insert 50:
![Image](https://media.geeksforgeeks.org/wp-content/cdn-uploads/ch3.png)

###### Insert 53: h1(53)=9.But 20 is already there at 9. We place 53 in table 1 & 20 in table 2 at h2(20).
![Image](https://media.geeksforgeeks.org/wp-content/cdn-uploads/ch4.png)

###### Insert:75. h1(75) = 9.But 53 is already there at 9. We place 75 in table 1 & 53 in table 2 at h2(53). 
![Image](https://media.geeksforgeeks.org/wp-content/cdn-uploads/ch5.png)


![Image](https://media.geeksforgeeks.org/wp-content/cdn-uploads/ch6.png)

![Image](https://media.geeksforgeeks.org/wp-content/cdn-uploads/ch7.png)

![Image](https://media.geeksforgeeks.org/wp-content/cdn-uploads/ch8.png)

![Image](https://media.geeksforgeeks.org/wp-content/cdn-uploads/ch9.png)
