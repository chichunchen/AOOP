using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Windows.Forms;

namespace POS
{
    public partial class Form1 : Form
    {
        String name;
        int price, number, subTotal;

        public Form1()
        {
            InitializeComponent();

            // 填入銷售項目到菜單中
            DataGridViewRowCollection rows = dataGridViewMenu.Rows;
            rows.Add(new Object[] { "紅茶", 25 });
            rows.Add(new Object[] { "綠茶", 25 });
            rows.Add(new Object[] { "奶茶", 30 });
            rows.Add(new Object[] { "珍珠奶茶", 35 });
        }

        private void dataGridViewMenu_CellClick(object sender, DataGridViewCellEventArgs e)
        {
            // 選取某項目，將該項目的品名價格放入待購項目中。
            if (dataGridViewMenu.Rows[e.RowIndex].Cells[0].Value == null)
                return;
            textBoxName.Text = dataGridViewMenu.Rows[e.RowIndex].Cells[0].Value.ToString();
            textBoxPrice.Text = dataGridViewMenu.Rows[e.RowIndex].Cells[1].Value.ToString();
            calculateSubTotal();
        }

        private void calculateSubTotal() // 計算小計
        {
            name = textBoxName.Text;
            price = int.Parse(textBoxPrice.Text);
            number = (int) numericUpDownNumber.Value;
            subTotal = price * number; // 小計 = 價格 * 數量
            textBoxSubTotal.Text = subTotal.ToString();
        }

        private void numericUpDownNumber_ValueChanged(object sender, EventArgs e)
        {
            calculateSubTotal();
        }

        private void buttonAdd_Click(object sender, EventArgs e)
        {
            // 加入紐被按下
            calculateSubTotal(); // 計算小計，並加入到訂單中
            dataGridViewOrder.Rows.Add(new Object[] { name, price, number, subTotal }); 
            calculateTotal(); // 重新計算總價
        }

        private void calculateTotal() // 計算總價
        {
            double total = 0.0;
            for (int i = 0; i < dataGridViewOrder.Rows.Count; i++)
            {
                DataGridViewRow row = dataGridViewOrder.Rows[i];
                if (row.Cells[0].Value != null)
                    total += (int) row.Cells[3].Value;
            }
            textBoxTotal.Text = total.ToString();
        }
    }
}
