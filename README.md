# DAA-ASSIGNMENT-2
## Implementation of Cuckoo Hashing.
### Cuckoo Hashing : 

###### Cuckoo hashing is a type of hashing wh?re two hash functions hl and h2 are used such that each of the key can hash to two possible locations.

###### Cuckoo hashing is a scheme in computer programming for resolving hash collisions of values of hash functions in a table, with worst-case constant lookup time.

###### Cuckoo hashing applies the idea of multiple-choice and relocation ###### together and guarantees O(1) worst case lookup time! 

######* Multiple-choice: We give a key two choices the h1(key) and h2(key) for residing.
######* Relocation: It may happen that h1(key) and h2(key) are preoccupied. This is resolved by imitating the Cuckoo bird: it pushes the other eggs or young out of the nest when it hatches. Analogously, inserting a new key into a cuckoo hashing table may push an older key to a different location. This leaves us with the problem of re-placing the older key. 
