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
(¬p v ¬q) v r  <=>  (¬p v ¬q) v r            Asspciative 
```
```
 (q ∨ r) → p         <=> (q → p)∧(r → p)
¬(q v r) v p         <=> (¬q v p)^(¬r v p)     Implicationx3
(¬q ^ ¬r) v p        <=> (¬q v p)^(¬r v p)     De Morgan's Law
(¬q v p) ^ (¬r v p)  <=> (¬q v p)^(¬r v p)     Distributive
```

**Part 4**
```

