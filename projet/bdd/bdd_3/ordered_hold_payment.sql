Use main_db;

INSERT INTO Ordered(reference, datedelivery, dateinssuance, datesettlement, settlementbalance, fullprice, id_customer)
VALUES
('JEBO2022SEV1', '2022-09-11', '2022-09-01','2022-09-01',0, 30 ,1); /*30 E */


Insert into Hold(quantity, sellprice, vat, id_order,id_item, id_reduc)
Values
(1, 25, 5, 1, 1 ,1);

INSERT INTO Payment(datepayment, meanpayment, amountpayment, id_order)
VALUES
('2022-09-01', 'Credit card', 30.0, 1);

