#include "StdAfx.h"
#include "database.h"
#include <iostream>

void database::getdata()
{	
	/*for(int i=0;i<11;i++){
		 try
			{
				strSQL ="select price from food where idfood="+(i+13)+"";
				connect->Open();
				cmd = gcnew MySqlCommand(strSQL , connect );
				cmd->ExecuteNonQuery();
				reader = cmd->ExecuteReader();			
				while( reader->Read() )
					f[i].price=reader->GetInt32(0);
				connect->Close();
				delete cmd;
			}
		catch( Exception ^e )
			 {
				System::Windows::Forms::DialogResult result;
				result = MessageBox::Show( e->ToString() );
				connect->Close();
				delete cmd;
			 }
		try
			{
			
		strSQL ="select ex_date from food where idfood="+(i+13)+"";
		connect->Open();
		cmd = gcnew MySqlCommand(strSQL , connect );
		cmd->ExecuteNonQuery();
		reader = cmd->ExecuteReader();			
		while( reader->Read() )
			f[i].ex_date=reader->GetInt32(0);
		connect->Close();
		delete cmd;
		}
		catch( Exception ^e )
			 {
				System::Windows::Forms::DialogResult result;
				result = MessageBox::Show( e->ToString() );
				connect->Close();
				delete cmd;
			 }
		try
			{
		strSQL ="select idfood from food where idfood="+(i+13)+"";
		connect->Open();
		cmd = gcnew MySqlCommand(strSQL , connect );
		cmd->ExecuteNonQuery();
		reader = cmd->ExecuteReader();			
		while( reader->Read() )
			f[i].No=reader->GetInt32(0);
		connect->Close();
		delete cmd;
		}
		catch( Exception ^e )
			 {
				System::Windows::Forms::DialogResult result;
				result = MessageBox::Show( e->ToString() );
				connect->Close();
				delete cmd;
			 }
		try
			{
		strSQL ="select name from food where idfood="+(i+13)+"";
		connect->Open();
		cmd = gcnew MySqlCommand(strSQL , connect );
		cmd->ExecuteNonQuery();
		reader = cmd->ExecuteReader();			
		while( reader->Read() )
			f[i].name=reader->GetString(0);
		connect->Close();
		delete cmd;
		}
		catch( Exception ^e )
			 {
				System::Windows::Forms::DialogResult result;
				result = MessageBox::Show( e->ToString() );
				connect->Close();
				delete cmd;
			 }
		try
			{
		strSQL ="select amount from food where idfood="+(i+13)+"";
		connect->Open();
		cmd = gcnew MySqlCommand(strSQL , connect );
		cmd->ExecuteNonQuery();
		reader = cmd->ExecuteReader();			
		while( reader->Read() )
			f[i].amount=reader->GetInt32(0);
		connect->Close();
		delete cmd;}
		catch( Exception ^e )
			 {
				System::Windows::Forms::DialogResult result;
				result = MessageBox::Show( e->ToString() );
				connect->Close();
				delete cmd;
			 }
		
	
	}*/





for(int i=0;i<12;i++){
		 try
			{
				strSQL ="select price from micro_food where idmicro_food="+(i+1)+"";
				connect->Open();
				cmd = gcnew MySqlCommand(strSQL , connect );
				cmd->ExecuteNonQuery();
				reader = cmd->ExecuteReader();			
				while( reader->Read() )
					mf[i].price=reader->GetInt32(0);
				connect->Close();
				delete cmd;
			}
		catch( Exception ^e )
			 {
				System::Windows::Forms::DialogResult result;
				result = MessageBox::Show( e->ToString() );
				connect->Close();
				delete cmd;
			 }
		try
			{
			
		strSQL ="select ex_date from micro_food where idmicro_food="+(i+1)+"";
		connect->Open();
		cmd = gcnew MySqlCommand(strSQL , connect );
		cmd->ExecuteNonQuery();
		reader = cmd->ExecuteReader();			
		while( reader->Read() )
			mf[i].ex_date=reader->GetInt32(0);
		connect->Close();
		delete cmd;
		}
		catch( Exception ^e )
			 {
				System::Windows::Forms::DialogResult result;
				result = MessageBox::Show( e->ToString() );
				connect->Close();
				delete cmd;
			 }
		try
			{
		strSQL ="select idfood from micro_food where idmicro_food="+(i+1)+"";
		connect->Open();
		cmd = gcnew MySqlCommand(strSQL , connect );
		cmd->ExecuteNonQuery();
		reader = cmd->ExecuteReader();			
		while( reader->Read() )
			mf[i].No=reader->GetInt32(0);
		connect->Close();
		delete cmd;
		}
		catch( Exception ^e )
			 {
				System::Windows::Forms::DialogResult result;
				result = MessageBox::Show( e->ToString() );
				connect->Close();
				delete cmd;
			 }
		/*try
			{
		strSQL ="select name from micro_food where idmicro_food="+(i+1)+"";
		connect->Open();
		cmd = gcnew MySqlCommand(strSQL , connect );
		cmd->ExecuteNonQuery();
		reader = cmd->ExecuteReader();			
		while( reader->Read() )
			mf[i].name=reader->GetString(0);
		connect->Close();
		delete cmd;
		}
		catch( Exception ^e )
			 {
				System::Windows::Forms::DialogResult result;
				result = MessageBox::Show( e->ToString() );
				connect->Close();
				delete cmd;
			 }*/
		try
			{
		strSQL ="select amount from micro_food where idmicro_food="+(i+1)+"";
		connect->Open();
		cmd = gcnew MySqlCommand(strSQL , connect );
		cmd->ExecuteNonQuery();
		reader = cmd->ExecuteReader();			
		while( reader->Read() )
			mf[i].amount=reader->GetInt32(0);
		connect->Close();
		delete cmd;}
		catch( Exception ^e )
			 {
				System::Windows::Forms::DialogResult result;
				result = MessageBox::Show( e->ToString() );
				connect->Close();
				delete cmd;
			 }
		
	







	}
}



for(int i=0;i<13;i++){
		 try
			{
				strSQL ="select price from beverage where idbeverage="+(i+24)+"";
				connect->Open();
				cmd = gcnew MySqlCommand(strSQL , connect );
				cmd->ExecuteNonQuery();
				reader = cmd->ExecuteReader();			
				while( reader->Read() )
					b[i].price=reader->GetInt32(0);
				connect->Close();
				delete cmd;
			}
		catch( Exception ^e )
			 {
				System::Windows::Forms::DialogResult result;
				result = MessageBox::Show( e->ToString() );
				connect->Close();
				delete cmd;
			 }
		try
			{
			
		strSQL ="select ex_date from beverage where idbeverage="+(i+24)+"";
		connect->Open();
		cmd = gcnew MySqlCommand(strSQL , connect );
		cmd->ExecuteNonQuery();
		reader = cmd->ExecuteReader();			
		while( reader->Read() )
			b[i].ex_date=reader->GetInt32(0);
		connect->Close();
		delete cmd;
		}
		catch( Exception ^e )
			 {
				System::Windows::Forms::DialogResult result;
				result = MessageBox::Show( e->ToString() );
				connect->Close();
				delete cmd;
			 }
		try
			{
		strSQL ="select idfood from beverage where idbeverage="+(i+24)+"";
		connect->Open();
		cmd = gcnew MySqlCommand(strSQL , connect );
		cmd->ExecuteNonQuery();
		reader = cmd->ExecuteReader();			
		while( reader->Read() )
			b[i].No=reader->GetInt32(0);
		connect->Close();
		delete cmd;
		}
		catch( Exception ^e )
			 {
				System::Windows::Forms::DialogResult result;
				result = MessageBox::Show( e->ToString() );
				connect->Close();
				delete cmd;
			 }
		/*try
			{
		strSQL ="select name from beverage where idbeverage="+(i+24)+"";
		connect->Open();
		cmd = gcnew MySqlCommand(strSQL , connect );
		cmd->ExecuteNonQuery();
		reader = cmd->ExecuteReader();			
		while( reader->Read() )
			b[i].name=reader->GetString(0);
		connect->Close();
		delete cmd;
		}
		catch( Exception ^e )
			 {
				System::Windows::Forms::DialogResult result;
				result = MessageBox::Show( e->ToString() );
				connect->Close();
				delete cmd;
			 }*/
		try
			{
		strSQL ="select amount from beverage where idbeverage="+(i+24)+"";
		connect->Open();
		cmd = gcnew MySqlCommand(strSQL , connect );
		cmd->ExecuteNonQuery();
		reader = cmd->ExecuteReader();			
		while( reader->Read() )
			mf[i].amount=reader->GetInt32(0);
		connect->Close();
		delete cmd;}
		catch( Exception ^e )
			 {
				System::Windows::Forms::DialogResult result;
				result = MessageBox::Show( e->ToString() );
				connect->Close();
				delete cmd;
			 }












		//
		
for(int i=0;i<4;i++){
		 try
			{
				strSQL ="select price from micro_beverage where idmicro_beverage="+(i+37)+"";
				connect->Open();
				cmd = gcnew MySqlCommand(strSQL , connect );
				cmd->ExecuteNonQuery();
				reader = cmd->ExecuteReader();			
				while( reader->Read() )
					mb[i].price=reader->GetInt32(0);
				connect->Close();
				delete cmd;
			}
		catch( Exception ^e )
			 {
				System::Windows::Forms::DialogResult result;
				result = MessageBox::Show( e->ToString() );
				connect->Close();
				delete cmd;
			 }
		try
			{
			
		strSQL ="select ex_date from micro_beverage where idmicro_beverage="+(i+37)+"";
		connect->Open();
		cmd = gcnew MySqlCommand(strSQL , connect );
		cmd->ExecuteNonQuery();
		reader = cmd->ExecuteReader();			
		while( reader->Read() )
			mb[i].ex_date=reader->GetInt32(0);
		connect->Close();
		delete cmd;
		}
		catch( Exception ^e )
			 {
				System::Windows::Forms::DialogResult result;
				result = MessageBox::Show( e->ToString() );
				connect->Close();
				delete cmd;
			 }
		try
			{
		strSQL ="select idfood from micro_beverage where idmicro_beverage="+(i+37)+"";
		connect->Open();
		cmd = gcnew MySqlCommand(strSQL , connect );
		cmd->ExecuteNonQuery();
		reader = cmd->ExecuteReader();			
		while( reader->Read() )
			mb[i].No=reader->GetInt32(0);
		connect->Close();
		delete cmd;
		}
		catch( Exception ^e )
			 {
				System::Windows::Forms::DialogResult result;
				result = MessageBox::Show( e->ToString() );
				connect->Close();
				delete cmd;
			 }
		/*try
			{
		strSQL ="select name from micro_beverage where idmicro_beverage="+(i+37)+"";

		connect->Open();
		cmd = gcnew MySqlCommand(strSQL , connect );
		cmd->ExecuteNonQuery();
		reader = cmd->ExecuteReader();			
		while( reader->Read() )
			b[i].name=reader->GetString(0);
		connect->Close();
		delete cmd;
		}
		catch( Exception ^e )
			 {
				System::Windows::Forms::DialogResult result;
				result = MessageBox::Show( e->ToString() );
				connect->Close();
				delete cmd;
			 }*/
		try
			{
		strSQL ="select amount from micro_beverage where idmicro_beverage="+(i+37)+"";
		connect->Open();
		cmd = gcnew MySqlCommand(strSQL , connect );
		cmd->ExecuteNonQuery();
		reader = cmd->ExecuteReader();			
		while( reader->Read() )
			mb[i].amount=reader->GetInt32(0);
		connect->Close();
		delete cmd;}
		catch( Exception ^e )
			 {
				System::Windows::Forms::DialogResult result;
				result = MessageBox::Show( e->ToString() );
				connect->Close();
				delete cmd;
			 }