USE main_db;

Declare @nom_produit_avendre varchar(50);
Declare @var_quantity int;
Declare @var_order int;
Declare @var_customer int;
Declare @var_id_product int;
Declare @var_product_price int;
Declare @var_product_VAT int;
Declare @prenom_lettre char;
Declare @nom_lettre char;
Declare @var_reference varchar;

Set @nom_produit_avendre = 'arduino uno'
Set @var_quantity = 3
Set @var_order = 1
Set @var_customer = 1


Select @prenom_lettre = firstname  -- B
from Customer where id_customer = @var_customer

Select @nom_lettre = lastname  -- J
from Customer where id_customer = @var_customer

Select @var_id_product = id_item -- 1
from Item where nameproduct like @nom_produit_avendre

Select @var_product_price = price_excl_taxes 
from Item where id_item = @var_id_product -- 25

Select @var_product_VAT = vat  -- 5
from Item where id_item = @var_id_product

Set @var_reference = varchar(@prenom_lettre) + varchar(@nom_lettre) + varchar(year(GETDATE())) + varchar('PAR') + varchar(1);



Select year(GETDATE())

INSERT INTO Ordered(reference, datedelivery, dateinssuance, datesettlement, settlementbalance, fullprice, id_customer)
VALUES
('JEBO2022PAR1', '2022-09-11', '2022-09-01','2022-09-01',0, @var_product_price + @var_product_VAT ,1); /*30 E */

INSERT INTO HOLD(quantity, sellprice, vat, id_order, id_item, id_reduc)
Values
(@var_quantity, @var_product_price,  @var_product_VAT, @var_order, @var_id_product, 1);


/*
INSERT INTO HOLD (id_item, id_order)
VALUES
(1, 1), /* 25E */
(7, 1); /* 5E */

INSERT INTO Ordered(reference, datedelivery, dateinssuance, datesettlement, settlementbalance, fullprice, id_customer)
VALUES
('JEBO2022PAR1', '2022-09-11', '2022-09-01','2022-09-01',0, 30 ,1); /*30 E */

INSERT INTO Payment(datepayment, meanpayment, amountpayment, id_order)
VALUES
('2022-09-01', 'Credit card', 30.0, 1);


*/