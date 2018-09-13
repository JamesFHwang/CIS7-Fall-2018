**Part 1**
```
-If Mathematics is easy, then the homework is done and if the it is sunny, then camping is fun.

-(M v C) -> (S ^ H)
```

**Part 2**
```
(¬B → ¬A) → ((¬B → A) → B)
```
| A | B | ¬A | ¬B | ¬B -> ¬A | ¬B -> A | (¬B -> A) -> B | (¬B -> ¬A) -> ((¬B -> A) -> B) 
| - | - | -- | -- | -------- | ------- | -------------- | ------------------------------ 
| T | T | F  | F  | T        | T       | T              | T
| T | F | F  | T  | F        | T       | F              | T
| F | T | T  | F  | T        | T       | T              | T
| F | F | T  | T  | T        | F       | T              | T

Tautology
```
((A → B)∧(B → ¬A)) → A
```
| A | B | ¬A | A -> B | B -> ¬A | (A -> B) ^ (B -> ¬A) | ((A -> B) ^ (B -> ¬A)) -> A 
| - | - | -- | ------ | ------- | -------------------- | ---------------------------
| T | T | F  | T      | F       | T                    | T
| T | F | F  | F      | T       | T                    | T
| F | T | T  | T      | T       | T                    | F
| F | F | T  | T      | T       | T                    | F

Neither

**Part 3**
```
 (p ∧ q) → r   <=>    p → (q → r )
¬(p ^ q) v r   <=>   ¬p v (¬q v r)           Implicationx3
(¬p v ¬q) v r  <=>   ¬p v (¬q v r)           De Morgan's Law
(¬p v ¬q) v r  <=>  (¬p v ¬q) v r            Associative 
```
```
 (q ∨ r) → p         <=> (q → p)∧(r → p)
¬(q v r) v p         <=> (¬q v p)^(¬r v p)     Implicationx3
(¬q ^ ¬r) v p        <=> (¬q v p)^(¬r v p)     De Morgan's Law
(¬q v p) ^ (¬r v p)  <=> (¬q v p)^(¬r v p)     Distributive
```

**Part 4**
```
There exists a city where all travelers and residents dont love where they live but love other cities
```
```
∀x∀y(City(x) ^ Traveler(y) ^ lives(y,x)) → (¬Loves(y,x))
```

**Part 5**
```
p → (q ∧ r), s → r , r → p

s             Assumption
s  -> r       Premise
r             Modus Ponen
r  -> p       Premise
p             Modus Ponen
p  -> (q ^ r) Premise
s <=> p       Modus Ponenx2
s  -> q

s → q

```
```
¬(r ∨ s), ¬p → s, p → q

¬(r v s)    Premise
¬r ^ ¬s     De Morgan's Law
¬s
¬p -> s     Premise
p -> ¬s     Modus Tollens
p      Modus Ponens
q      Modus Ponens

q
```
