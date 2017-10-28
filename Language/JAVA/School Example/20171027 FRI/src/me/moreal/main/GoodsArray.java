package me.moreal.main;

// java ������ �̸��� Ŭ���� �̸��� ���ƾ� �Ѵ�. �� Ŭ������ ���� �����ڸ� ���� �� ������ �� �̿��� Ŭ�������� ���� �����ڸ� ���� �� ����. (default)

public class GoodsArray {
	Good[] Goods;
	
	final int defaultSize = 10;
	
	GoodsArray(Good[] Goods)
	{
		this.Goods = Goods.clone();
	}
	
	GoodsArray(int[] prices)
	{
		for(int i = 0; i < prices.length; ++i)
			Goods[i] = new Good(prices[i]);
	}
	
	GoodsArray()
	{
		Goods = new Good[defaultSize];
		for(int i = 0; i < defaultSize; ++i)
			Goods[i] = new Good(i);
	}
	
	Good[] getGoods()
	{
		return Goods;
	}
	
	Good getGood(int index)
	{
		if(index > Goods.length)
			return null;
		
		return Goods[index];
	}
	
	void ShowGoods()
	{
		for(int i = 0; i < Goods.length; ++i)
			System.out.println(Goods[i].getPrice());
	}
}

class Good{
	private int price;
	
	Good(int price)
	{
		this.price = price;
	}
	
	Good()
	{
		this(10000);
	}
	
	int getPrice() { return price; }
}