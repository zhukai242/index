<?php
$z[0]=Array("field","",233,252);
$z[0][4]['name']="title";
$z[1]=Array("global","",253,279);
$z[1][4]['name']="cfg_webname";
$z[2]=Array("field","",320,349);
$z[2][4]['name']="keywords";
$z[3]=Array("field","",389,447);
$z[3][4]['name']="description";
$z[3][4]['function']="html2text(@me)";
$z[4]=Array("include","",868,903);
$z[4][4]['filename']="head.htm";
$z[5]=Array("arclist","\r\n    <li><img src=\"[field:picname/]\" alt=\"[field:title/]\" width=\"180\" height=\"208\" />\r\n      <p class=\"title\">[field:title/]</p>\r\n      <p class=\"intro\">[field:description function=\"cn_substr(@me,120)\"/]</p>\r\n    </li>\r\n    ",1219,1526);
$z[5][4]['typeid']="36";
$z[5][4]['row']="3";
$z[5][4]['titlelen']="80";
$z[5][4]['orderby']="id";
$z[6]=Array("arclist","\r\n  <div class=\"wrap posr\" style=\"overflow:hidden;\">\r\n    <dl>\r\n      <dt>[field:title/]</dt>\r\n      <dd style=\"width: 300px;\">[field:description function=\"cn_substr(@me,320)\"/]</dd>\r\n    </dl>\r\n    <div class=\"wechat_img\"><img src=\"[field:picname/]\" alt=\"[field:title/]\" width=\"540\" height=\"640\"/></div>\r\n  </div>\r\n  ",1706,2093);
$z[6][4]['typeid']="37";
$z[6][4]['row']="1";
$z[6][4]['titlelen']="80";
$z[7]=Array("arclist","\r\n  <div class=\"wi_left fl\"><img src=\"[field:picname/]\" alt=\"[field:title/]定制\" width=\"291\" height=\"461\"/></div>\r\n\r\n  <div class=\"wi_right fl\">\r\n    <h2>[field:title/]</h2>\r\n    <p class=\"text\">[field:description function=\"cn_substr(@me,320)\"/]</p>\r\n  </div>\r\n   ",2137,2472);
$z[7][4]['typeid']="38";
$z[7][4]['row']="1";
$z[7][4]['titlelen']="80";
$z[8]=Array("include","",2483,2520);
$z[8][4]['filename']="footer.htm";
$z[9]=Array("include","",2530,2566);
$z[9][4]['filename']="right.htm";

?>