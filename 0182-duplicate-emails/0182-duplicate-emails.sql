# Write your MySQL query statement below


SELECT email AS Email
FROM Person p
GROUP BY email
HAVING COUNT(*) > 1;