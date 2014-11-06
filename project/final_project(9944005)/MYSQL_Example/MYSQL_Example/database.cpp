#include "StdAfx.h"
#include "database.h"
#include "commodity.h"
#include "food.h"
#include "micro_food.h"
#include "beverage.h"
#include "micro_beverage.h"
#include <iostream>

void database::getdata()
{	
	food f[11]; //宣告大小為11,型態為food的陣列
	micro_food mf[12];
	beverage b[13];
	micro_beverage mb[4];
	for(int i=0;i<11;i++){
		strSQL ="select price from food where idfood="+(i+13)+"";
		connect->Open();
		cmd = gcnew MySqlCommand(strSQL , connect );
		cmd->ExecuteNonQuery();
		reader = cmd->ExecuteReader();			
		while( reader->Read() )
			f[i].price=reader->GetInt32(0);
		connect->Close();
		delete cmd;
		
		strSQL ="select ex_date from food where idfood="+(i+13)+"";
		connect->Open();
		cmd = gcnew MySqlCommand(strSQL , connect );
		cmd->ExecuteNonQuery();
		reader = cmd->ExecuteReader();			
		while( reader->Read() )
			f[i].ex_date=reader->GetInt32(0);
		connect->Close();
		delete cmd;
		
		strSQL ="select idfood from food where idfood="+(i+13)+"";
		connect->Open();
		cmd = gcnew MySqlCommand(strSQL , connect );
		cmd->ExecuteNonQuery();
		reader = cmd->ExecuteReader();			
		while( reader->Read() )
			f[i].No=reader->GetInt32(0);
		connect->Close();
		delete cmd;

		strSQL ="select name from food where idfood="+(i+13)+"";
		connect->Open();
		cmd = gcnew MySqlCommand(strSQL , connect );
		cmd->ExecuteNonQuery();
		reader = cmd->ExecuteReader();			
		while( reader->Read() )
			f[i].name=reader->GetString(0);
		connect->Close();
		delete cmd;

		strSQL ="select amount from food where idfood="+(i+13)+"";
		connect->Open();
		cmd = gcnew MySqlCommand(strSQL , connect );
		cmd->ExecuteNonQuery();
		reader = cmd->ExecuteReader();			
		while( reader->Read() )
			f[i].amount=reader->GetInt32(0);
		connect->Close();
		delete cmd;
	}
}
