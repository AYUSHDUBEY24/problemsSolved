SELECT DISTINCT
    l.Num AS ConsecutiveNums
FROM Logs l
JOIN Logs l2 ON l2.Id = l.Id + 1
JOIN Logs l3 ON l3.Id = l.Id + 2
WHERE l.Num = l2.Num
  AND l.Num = l3.Num;