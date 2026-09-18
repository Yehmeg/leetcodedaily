# Write your MySQL query statement below
select name , population , area
FROM World
where World.population >= 25000000 or World.area >=3000000;