#include <string>
#include "components.h"

/*******************************
使用方法：
參數有：(1)components的物件 
        (2)幾條線
        (3)觀察時間
傳回值為一個string 
********************************/

#ifndef EXTENSION_H
#define EXTENSION_H
using namespace std;
namespace ext{
  string convert_html(const components & comp , int line_num , int time){
    string html;
    char tmp[100];
    
    html+="<html>\n";
    html+="  <head>\n";
    html+="<meta http-equiv=\"Content-Type\" content=\"text/html; charset=big5\">\n";
    html+="    <script type=\"text/javascript\" src=\"https://www.google.com/jsapi\"></script>\n";
    html+="    <script type=\"text/javascript\">\n";
    html+="      google.load(\"visualization\", \"1\", {packages:[\"corechart\"]});\n";
    html+="      google.setOnLoadCallback(drawChart);\n";
    html+="      function drawChart() {\n";
    html+="        var data = google.visualization.arrayToDataTable([\n";
    html+="          ['Time','Power', 'Voltage'],\n";
    
    for(int i = 0 ; i < time ; i++){
        sprintf(tmp,"%s%d%s","[",i,",");
        html+=tmp;
       for(int j = 0 ; j < line_num ; j++){
          sprintf(tmp,"%lf",comp.pic[j][i]);
          html+=tmp;
          if(j!=line_num-1)
            html+=",";
        }
        html+="],\n";
      }
    html+="        ]);\n";
    html+="        var options = {\n";
    html+="          title: 'Resistor Power'\n";
    html+="        };\n";
    html+="        var chart = new google.visualization.LineChart(document.getElementById('chart_div'));\n";
    html+="        chart.draw(data, options);\n";
    html+="      }\n";
    html+="    </script>\n";
    html+="  </head>\n";
    html+="  <body>\n";
    html+="    <div id=\"chart_div\" style=\"width: 900px; height: 500px;\"></div>\n";
    sprintf(tmp,"%s%lf%s%s%d","Resistance = ",comp.value," Ω <br>\n","Time Scope = ",time);
    html+=tmp;
    html+="  </body>\n";
    html+="</html>\n";
    
    return html;
    }
};

#endif
