<li>
      <div class="news_time fl"><span class="day">[field:pubdate function="MyDate('d',@me)"/]</span><span class="year">[field:pubdate function="MyDate('Y-m',@me)"/]</span><span class="author">[field:writer/]</span><span class="type"><a href="[field:typeurl/]" target="_blank">[field:typename /]</a></span></div>
      <div class="news_cont fr">
        <h2><a href="[field:arcurl/]" target="_blank">[field:title/]</a></h2>
        <p class="demo"><a href="[field:arcurl/]" target="_blank">[field:description function="cn_substr(@me,320)"/]...</a></p>
        <p class="vis"><a href="[field:arcurl/]" target="_blank" class="more btn">查看更多 >></a>浏览次数：[field:click/] &nbsp;&nbsp; [field:id function=GetTags(@me)/]  &nbsp; &nbsp;</p>
      </div>
    </li>