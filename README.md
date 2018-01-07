# Firmware Engineer Test 2. INGENIA

Este ejercicio se ha resuelto partiendo de una serie de premisas:

1. No habrá ganancia si se compra y vende el mismo día. Por lo que no tiene sentido comprobar valores de A con índices iguales.

2. Siempre se vende tras haber comprado, al menos un día después. Esto implica que no tiene sentido comprobar días donde la fecha de venta sea previa a la fecha de compra. 

3. El mínimo valor de profit es cero. Cualquier valor de profit mayor a cero, es mejor a este mínimo. Debido a esto se inicializa el valor de retorno a cero. 

Según estas premisas el código realiza una búsqueda del mayor profit de “adelante hacia atrás”, es decir, comparando los valores de las acciones del último día N con los días anteriores a este, hacia el valor de las acciones del día 0. Para ello se han definido dos variables, que señalan el día de venta y de compra: diaVenta y diaCompra respectivamente. La diferencia entre los días comparados se almacena de forma temporal en temMaxProfit. Si este valor es mayor a maxProfit (inicializado a cero, lo que implica que hay ganancia), maxProfit se actualiza y toma el valor de tempMaxProfit. Finalmente la función retornará el valor de maxProfit. 
