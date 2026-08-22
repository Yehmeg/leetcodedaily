# Write your MySQL query statement below
select firstName , lastName, city , state 
FROM Person p
LEFT JOIN Address a
ON p.personid = a.personid; 