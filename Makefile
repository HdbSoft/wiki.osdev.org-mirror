<!DOCTYPE html>
<html lang="en" dir="ltr" class="client-nojs">
<head>
<title>Makefile - OSDev Wiki</title>
<meta charset="UTF-8" />
<meta name="generator" content="MediaWiki 1.18.0" />
<link rel="shortcut icon" href="favicon.ico" />
<link rel="search" type="application/opensearchdescription+xml" href="http://wiki.osdev.org/opensearch_desc.php" title="OSDev Wiki (en)" />
<link rel="EditURI" type="application/rsd+xml" href="http://wiki.osdev.org/api.php?action=rsd" />
<link rel="alternate" type="application/atom+xml" title="OSDev Wiki Atom feed" href="http://wiki.osdev.org/index.php?title=Special:RecentChanges&amp;feed=atom" />
<link rel="stylesheet" href="http://wiki.osdev.org/load.php?debug=false&amp;lang=en&amp;modules=mediawiki.legacy.commonPrint%2Cshared%7Cskins.vector&amp;only=styles&amp;skin=vector&amp;*" />
<meta name="ResourceLoaderDynamicStyles" content="" />
<link rel="stylesheet" href="http://wiki.osdev.org/load.php?debug=false&amp;lang=en&amp;modules=site&amp;only=styles&amp;skin=vector&amp;*" />
<style>a:lang(ar),a:lang(ckb),a:lang(fa),a:lang(kk-arab),a:lang(mzn),a:lang(ps),a:lang(ur){text-decoration:none}a.new,#quickbar a.new{color:#ba0000}

/* cache key: wikidb:resourceloader:filter:minify-css:4:c88e2bcd56513749bec09a7e29cb3ffa */
</style>
<script src="http://wiki.osdev.org/load.php?debug=false&amp;lang=en&amp;modules=startup&amp;only=scripts&amp;skin=vector&amp;*"></script>
<script>if(window.mw){
	mw.config.set({"wgCanonicalNamespace": "", "wgCanonicalSpecialPageName": false, "wgNamespaceNumber": 0, "wgPageName": "Makefile", "wgTitle": "Makefile", "wgCurRevisionId": 21684, "wgArticleId": 1785, "wgIsArticle": true, "wgAction": "view", "wgUserName": null, "wgUserGroups": ["*"], "wgCategories": ["Level 1 Tutorials", "Tutorials", "Tools"], "wgBreakFrames": false, "wgRestrictionEdit": [], "wgRestrictionMove": []});
}
</script><script>if(window.mw){
	mw.loader.load(["mediawiki.page.startup"]);
}
</script>
<style type="text/css">/*<![CDATA[*/
.source-make {line-height: normal;}
.source-make li, .source-make pre {
	line-height: normal; border: 0px none white;
}
/**
 * GeSHi Dynamically Generated Stylesheet
 * --------------------------------------
 * Dynamically generated stylesheet for make
 * CSS class: source-make, CSS id: 
 * GeSHi (C) 2004 - 2007 Nigel McNie, 2007 - 2008 Benny Baumann
 * (http://qbnz.com/highlighter/ and http://geshi.org/)
 * --------------------------------------
 */
.make.source-make .de1, .make.source-make .de2 {font: normal normal 1em/1.2em monospace; margin:0; padding:0; background:none; vertical-align:top;}
.make.source-make  {font-family:monospace;}
.make.source-make .imp {font-weight: bold; color: red;}
.make.source-make li, .make.source-make .li1 {font-weight: normal; vertical-align:top;}
.make.source-make .ln {width:1px;text-align:right;margin:0;padding:0 2px;vertical-align:top;}
.make.source-make .li2 {font-weight: bold; vertical-align:top;}
.make.source-make .kw1 {color: #666622; font-weight: bold;}
.make.source-make .kw2 {color: #990000;}
.make.source-make .co1 {color: #339900; font-style: italic;}
.make.source-make .co2 {color: #000099; font-weight: bold;}
.make.source-make .es0 {color: #000099; font-weight: bold;}
.make.source-make .br0 {color: #004400;}
.make.source-make .sy0 {color: #004400;}
.make.source-make .st0 {color: #CC2200;}
.make.source-make .nu0 {color: #CC2200;}
.make.source-make .re0 {color: #000088; font-weight: bold;}
.make.source-make .re1 {color: #0000CC; font-weight: bold;}
.make.source-make .re2 {color: #000088;}
.make.source-make .ln-xtra, .make.source-make li.ln-xtra, .make.source-make div.ln-xtra {background-color: #ffc;}
.make.source-make span.xtra { display:block; }

/*]]>*/
</style>
<style type="text/css">/*<![CDATA[*/
@import "http://wiki.osdev.org/index.php?title=MediaWiki:Geshi.css&amp;usemsgcache=yes&amp;action=raw&amp;ctype=text/css&amp;smaxage=18000";
/*]]>*/
</style><style type="text/css">/*<![CDATA[*/
.source-c {line-height: normal;}
.source-c li, .source-c pre {
	line-height: normal; border: 0px none white;
}
/**
 * GeSHi Dynamically Generated Stylesheet
 * --------------------------------------
 * Dynamically generated stylesheet for c
 * CSS class: source-c, CSS id: 
 * GeSHi (C) 2004 - 2007 Nigel McNie, 2007 - 2008 Benny Baumann
 * (http://qbnz.com/highlighter/ and http://geshi.org/)
 * --------------------------------------
 */
.c.source-c .de1, .c.source-c .de2 {font: normal normal 1em/1.2em monospace; margin:0; padding:0; background:none; vertical-align:top;}
.c.source-c  {font-family:monospace;}
.c.source-c .imp {font-weight: bold; color: red;}
.c.source-c li, .c.source-c .li1 {font-weight: normal; vertical-align:top;}
.c.source-c .ln {width:1px;text-align:right;margin:0;padding:0 2px;vertical-align:top;}
.c.source-c .li2 {font-weight: bold; vertical-align:top;}
.c.source-c .kw1 {color: #b1b100;}
.c.source-c .kw2 {color: #000000; font-weight: bold;}
.c.source-c .kw3 {color: #000066;}
.c.source-c .kw4 {color: #993333;}
.c.source-c .co1 {color: #666666; font-style: italic;}
.c.source-c .co2 {color: #339933;}
.c.source-c .coMULTI {color: #808080; font-style: italic;}
.c.source-c .es0 {color: #000099; font-weight: bold;}
.c.source-c .es1 {color: #000099; font-weight: bold;}
.c.source-c .es2 {color: #660099; font-weight: bold;}
.c.source-c .es3 {color: #660099; font-weight: bold;}
.c.source-c .es4 {color: #660099; font-weight: bold;}
.c.source-c .es5 {color: #006699; font-weight: bold;}
.c.source-c .br0 {color: #009900;}
.c.source-c .sy0 {color: #339933;}
.c.source-c .st0 {color: #ff0000;}
.c.source-c .nu0 {color: #0000dd;}
.c.source-c .nu6 {color: #208080;}
.c.source-c .nu8 {color: #208080;}
.c.source-c .nu12 {color: #208080;}
.c.source-c .nu16 {color:#800080;}
.c.source-c .nu17 {color:#800080;}
.c.source-c .nu18 {color:#800080;}
.c.source-c .nu19 {color:#800080;}
.c.source-c .me1 {color: #202020;}
.c.source-c .me2 {color: #202020;}
.c.source-c .ln-xtra, .c.source-c li.ln-xtra, .c.source-c div.ln-xtra {background-color: #ffc;}
.c.source-c span.xtra { display:block; }

/*]]>*/
</style>
<style type="text/css">/*<![CDATA[*/
@import "http://wiki.osdev.org/index.php?title=MediaWiki:Geshi.css&amp;usemsgcache=yes&amp;action=raw&amp;ctype=text/css&amp;smaxage=18000";
/*]]>*/
</style><!--[if lt IE 7]><style type="text/css">body{behavior:url("/skins/vector/csshover.min.htc")}</style><![endif]--></head>
<body class="mediawiki ltr sitedir-ltr ns-0 ns-subject page-Makefile action-view skin-vector">
		<div id="mw-page-base" class="noprint"></div>
		<div id="mw-head-base" class="noprint"></div>
		<!-- content -->
		<div id="content">
			<a id="top"></a>
			<div id="mw-js-message" style="display:none;"></div>
						<!-- firstHeading -->
			<h1 id="firstHeading" class="firstHeading">Makefile</h1>
			<!-- /firstHeading -->
			<!-- bodyContent -->
			<div id="bodyContent">
								<!-- tagline -->
				<div id="siteSub">From OSDev Wiki</div>
				<!-- /tagline -->
								<!-- subtitle -->
				<div id="contentSub"></div>
				<!-- /subtitle -->
																<!-- jumpto -->
				<div id="jump-to-nav">
					Jump to: <a href="Makefile#mw-head">navigation</a>,
					<a href="Makefile#p-search">search</a>
				</div>
				<!-- /jumpto -->
								<!-- bodycontent -->
				<div lang="en" dir="ltr" class="mw-content-ltr"><table style="font-size:95%; line-height:1.5em; padding:0.25em; float:right; margin: 0 0 8px 15px; clear:right; border:1px solid #aaaaaa; background:#eee; text-align:center;;"><tr><th>Difficulty level</th></tr><tr><td><a href="File:Difficulty_1.png" class="image"><img alt="Difficulty 1.png" src="images/d/d3/Difficulty_1.png" width="46" height="14" /></a><br />Beginner</td></tr></table>
<p>A Makefile is a file which controls the 'make' command.  Make is available on virtually every platform, and is used to control the build process of a project.  Once a Makefile has been written for a project, make can easily and efficiently build your project and create the required output file(s).
</p><p>Make reads dependency information from your Makefile, figures out which output files need (re-)building (because they are either missing or older than their corresponding input files), executes the necessary commands to actually <i>do</i> the (re-)building. This compares favourably to "build batchfiles" that always rebuild the whole project.
</p><p>In doing this, make is not limited to any specific set of languages. Any tool that takes some input file and generates an output file can be controlled via make.
</p><p>A Makefile can offer several different "targets", which can be invoked by 'make &lt;target&gt;'. A frequently-used target is 'make clean', which removes any temporary files, or 'make install', which installs the project in its target location - but you can also give a specific output file as a target, and have make process only that file. Invoking make without a target parameter builds the default target (which is usually to build the whole project).
</p><p>But 'make' requires a well-written Makefile to do these things efficiently and reliably.
</p>
<table id="toc" class="toc"><tr><td><div id="toctitle"><h2>Contents</h2></div>
<ul>
<li class="toclevel-1 tocsection-1"><a href="Makefile#Makefile_tutorial"><span class="tocnumber">1</span> <span class="toctext">Makefile tutorial</span></a>
<ul>
<li class="toclevel-2 tocsection-2"><a href="Makefile#Basics"><span class="tocnumber">1.1</span> <span class="toctext">Basics</span></a></li>
<li class="toclevel-2 tocsection-3"><a href="Makefile#Automated_Testing"><span class="tocnumber">1.2</span> <span class="toctext">Automated Testing</span></a></li>
<li class="toclevel-2 tocsection-4"><a href="Makefile#File_Lists"><span class="tocnumber">1.3</span> <span class="toctext">File Lists</span></a>
<ul>
<li class="toclevel-3 tocsection-5"><a href="Makefile#Non-Source_Files"><span class="tocnumber">1.3.1</span> <span class="toctext">Non-Source Files</span></a></li>
<li class="toclevel-3 tocsection-6"><a href="Makefile#Project_Directories"><span class="tocnumber">1.3.2</span> <span class="toctext">Project Directories</span></a></li>
<li class="toclevel-3 tocsection-7"><a href="Makefile#Sources_and_Headers"><span class="tocnumber">1.3.3</span> <span class="toctext">Sources and Headers</span></a></li>
<li class="toclevel-3 tocsection-8"><a href="Makefile#Object_Files_and_Test_Driver_Executables"><span class="tocnumber">1.3.4</span> <span class="toctext">Object Files and Test Driver Executables</span></a></li>
<li class="toclevel-3 tocsection-9"><a href="Makefile#Dependencies.2C_pt._1"><span class="tocnumber">1.3.5</span> <span class="toctext">Dependencies, pt. 1</span></a></li>
<li class="toclevel-3 tocsection-10"><a href="Makefile#Distribution_Files"><span class="tocnumber">1.3.6</span> <span class="toctext">Distribution Files</span></a></li>
</ul>
</li>
<li class="toclevel-2 tocsection-11"><a href="Makefile#.PHONY"><span class="tocnumber">1.4</span> <span class="toctext">.PHONY</span></a></li>
<li class="toclevel-2 tocsection-12"><a href="Makefile#CFLAGS"><span class="tocnumber">1.5</span> <span class="toctext">CFLAGS</span></a></li>
<li class="toclevel-2 tocsection-13"><a href="Makefile#Rules"><span class="tocnumber">1.6</span> <span class="toctext">Rules</span></a>
<ul>
<li class="toclevel-3 tocsection-14"><a href="Makefile#Top-Level_Targets"><span class="tocnumber">1.6.1</span> <span class="toctext">Top-Level Targets</span></a></li>
<li class="toclevel-3 tocsection-15"><a href="Makefile#Automated_Testing.2C_pt._2"><span class="tocnumber">1.6.2</span> <span class="toctext">Automated Testing, pt. 2</span></a></li>
<li class="toclevel-3 tocsection-16"><a href="Makefile#Dependencies.2C_pt._2"><span class="tocnumber">1.6.3</span> <span class="toctext">Dependencies, pt. 2</span></a></li>
<li class="toclevel-3 tocsection-17"><a href="Makefile#Extracting_TODO_Statements"><span class="tocnumber">1.6.4</span> <span class="toctext">Extracting TODO Statements</span></a></li>
<li class="toclevel-3 tocsection-18"><a href="Makefile#Dependencies.2C_pt._3"><span class="tocnumber">1.6.5</span> <span class="toctext">Dependencies, pt. 3</span></a></li>
<li class="toclevel-3 tocsection-19"><a href="Makefile#Backups"><span class="tocnumber">1.6.6</span> <span class="toctext">Backups</span></a></li>
</ul>
</li>
<li class="toclevel-2 tocsection-20"><a href="Makefile#Summary"><span class="tocnumber">1.7</span> <span class="toctext">Summary</span></a></li>
</ul>
</li>
<li class="toclevel-1 tocsection-21"><a href="Makefile#Advanced_Techniques"><span class="tocnumber">2</span> <span class="toctext">Advanced Techniques</span></a>
<ul>
<li class="toclevel-2 tocsection-22"><a href="Makefile#Conditional_Evaluation"><span class="tocnumber">2.1</span> <span class="toctext">Conditional Evaluation</span></a></li>
<li class="toclevel-2 tocsection-23"><a href="Makefile#Multi-Target"><span class="tocnumber">2.2</span> <span class="toctext">Multi-Target</span></a></li>
</ul>
</li>
<li class="toclevel-1 tocsection-24"><a href="Makefile#See_Also"><span class="tocnumber">3</span> <span class="toctext">See Also</span></a>
<ul>
<li class="toclevel-2 tocsection-25"><a href="Makefile#Articles"><span class="tocnumber">3.1</span> <span class="toctext">Articles</span></a></li>
<li class="toclevel-2 tocsection-26"><a href="Makefile#External_Links"><span class="tocnumber">3.2</span> <span class="toctext">External Links</span></a></li>
</ul>
</li>
</ul>
</td></tr></table>
<h1> <span class="mw-headline" id="Makefile_tutorial"> Makefile tutorial </span></h1>
<p>The 'make' manual will tell you about the hundreds of things you can do with a Makefile, but it doesn't give you an example for a <i>good</i> Makefile. The following examples are mostly shaped after the real-life <a rel="nofollow" class="external text" href="http://pdclib.e43.eu">PDCLib</a> Makefile I used at the time, and shows some of the "tricks" used therein that may not be that obvious to the make beginner.
</p><p>The Makefile creates only one project-wide linker library, but it should be easy to expand it for multiple binaries/libraries.
</p><p>(Note: There are several different flavours of make around, and POSIX defines a common denominator for them. This tutorial specifically targets GNU make. See the <a href="Talk:Makefile#Which_make_to_target.3F" title="Talk:Makefile"> discussion page</a> for further info.) 
</p>
<h2> <span class="mw-headline" id="Basics"> Basics </span></h2>
<p>It is best practice to name your Makefile <code>Makefile</code> (without an extension), because when make is executed without any parameters, it will by default look for that file in the current directory. It also makes the file show up prominently on top of directory listings, at least on Unix machines.
</p><p>Generally speaking, a Makefile consists of <i>definitions</i> and <i>rules</i>.
</p><p>A <i>definition</i> declares a variable, and assigns a value to it. Its general syntax is <code>VARIABLE&#160;:= Value</code>.
</p><p><b>Note:</b> Frequently, you will see definitions using "=" instead of ":=". Such a definition will result in the assignment being evaluated <i>every time the variable is used</i>, while ":=" evaluates only once at the startup of make, which is usually what you want. Don't go changing other people's Makefiles, though - ":=" is a GNU extension to the make syntax.
</p><p>A rule defines a <i>target</i>, 0..n <i>dependencies</i>, and 0..n <i>commands</i>. The general idea is that <i>make</i> checks if the target (file) is there; if it isn't, or any of the dependencies is newer than the target, the commands are executed. The general syntax is:
</p>
<div dir="ltr" class="mw-geshi" style="text-align: left;"><div class="make source-make"><pre class="de1">target<span class="sy0">:</span> dependency
	command</pre></div></div>
<p>Both <i>dependency</i> and <i>command</i> are optional. There might be more than one <i>command</i> line, in which case they are executed in sequence.
</p><p>Note that commands <i>must be tab-indented</i>. If your editor environment is set to replace tabs with spaces, you have to undo that setting while editing a Makefile.
</p><p>What makes Makefiles so hard to read, for the beginner, is that it is not procedural in syntax (i.e., executed top-down), but functional: 'make' reads the <i>whole</i> Makefile, building a dependency tree, and then resolves the dependencies by hopping from rule to rule as necessary until the target you gave it on the command line has successfully been resolved.
</p><p>But let's not go into internal details of 'make'. This is a tutorial, not a man page, so it will show you how a real-life Makefile could be built, and the ideas behind each line.
</p>
<h2> <span class="mw-headline" id="Automated_Testing"> Automated Testing </span></h2>
<p>As the Makefile presented in this tutorial takes care of automated testing in a special way, this approach will be explained up front, so the related parts of the tutorial will make sense to you.
</p><p>As stated above, this tutorial is mainly derived from work done on the PDCLib project - which builds a single linker library. In that project, there is strictly one library function per source file. In each such source file, there is a test driver attached for conditional compilation, like this:
</p>
<div dir="ltr" class="mw-geshi" style="text-align: left;"><div class="c source-c"><pre class="de1"><span class="co2">#ifdef TEST</span>
<span class="kw4">int</span> main<span class="br0">&#40;</span><span class="br0">&#41;</span>
<span class="br0">&#123;</span>
    <span class="coMULTI">/* Test function code here */</span>
    <span class="kw1">return</span> NUMBER_OF_TEST_ERRORS<span class="sy0">;</span>
<span class="br0">&#125;</span>
<span class="co2">#endif</span></pre></div></div>
<p>Thus, when that source is compiled with <code>gcc -c</code>, it results in an object file with the library function code; when compiled with <code>gcc -DTEST</code>, it gives a test driver executable for that function. Returning the number of errors allows to do a grand total of errors encountered (see below).
</p>
<h2> <span class="mw-headline" id="File_Lists"> File Lists </span></h2>
<p>First, various "file lists" are assembled which are needed later in the Makefile.
</p>
<h3> <span class="mw-headline" id="Non-Source_Files"> Non-Source Files </span></h3>
<div dir="ltr" class="mw-geshi" style="text-align: left;"><div class="make source-make"><pre class="de1"><span class="co1"># This is a list of all non-source files that are part of the distribution.</span>
AUXFILES <span class="sy0">:=</span> Makefile Readme<span class="sy0">.</span>txt</pre></div></div>
<p>Further down we will have a target <i>"dist"</i>, which packages all required files into a tarball for distribution. Lists of the sources and headers are created anyway. But there are commonly some auxiliary files, which are not referenced anywhere else in the Makefile but should still end up in the tarball. These are listed here.
</p>
<h3> <span class="mw-headline" id="Project_Directories"> Project Directories </span></h3>
<div dir="ltr" class="mw-geshi" style="text-align: left;"><div class="make source-make"><pre class="de1">PROJDIRS <span class="sy0">:=</span> functions includes internals</pre></div></div>
<p>Those are subdirectories holding the actual sources. (Or rather, searched for source files automatically, see below.) These could be subprojects, or whatever. We could simply search for source files starting with the current working directory, but if you like to have temporary subdirectories in your project (for testing, keeping reference sources etc.), that wouldn't work.
</p><p><i>Note that this is not a recursive approach; there is no Makefile in those subdirectories. Dependencies are hard enough to get right if you use one Makefile. At the bottom of this article is a link to a very good paper on the subject titled "recursive make considered harmful"; not only is a single Makefile easier to maintain (once you learned a couple of tricks), it can also be more efficient!</i>
</p>
<h3> <span class="mw-headline" id="Sources_and_Headers"> Sources and Headers </span></h3>
<div dir="ltr" class="mw-geshi" style="text-align: left;"><div class="make source-make"><pre class="de1">SRCFILES <span class="sy0">:=</span> <span class="sy0">$</span><span class="br0">&#40;</span><span class="re1">shell</span> find <span class="sy0">$</span><span class="br0">&#40;</span><span class="re2">PROJDIRS</span><span class="br0">&#41;</span> <span class="sy0">-</span>type f <span class="sy0">-</span>name <span class="st0">&quot;<span class="es0">\*</span>.c&quot;</span><span class="br0">&#41;</span>
HDRFILES <span class="sy0">:=</span> <span class="sy0">$</span><span class="br0">&#40;</span><span class="re1">shell</span> find <span class="sy0">$</span><span class="br0">&#40;</span><span class="re2">PROJDIRS</span><span class="br0">&#41;</span> <span class="sy0">-</span>type f <span class="sy0">-</span>name <span class="st0">&quot;<span class="es0">\*</span>.h&quot;</span><span class="br0">&#41;</span></pre></div></div>
<p>It should be obvious to see what these two lines do. We now have a list of all source and header files in our project directories.
</p>
<h3> <span class="mw-headline" id="Object_Files_and_Test_Driver_Executables"> Object Files and Test Driver Executables </span></h3>
<div dir="ltr" class="mw-geshi" style="text-align: left;"><div class="make source-make"><pre class="de1">OBJFILES <span class="sy0">:=</span> <span class="sy0">$</span><span class="br0">&#40;</span><span class="re1">patsubst</span> <span class="sy0">%.</span>c<span class="sy0">,%.</span>o<span class="sy0">,$</span><span class="br0">&#40;</span><span class="re2">SRCFILES</span><span class="br0">&#41;</span><span class="br0">&#41;</span>
TSTFILES <span class="sy0">:=</span> <span class="sy0">$</span><span class="br0">&#40;</span><span class="re1">patsubst</span> <span class="sy0">%.</span>c<span class="sy0">,%</span>_t<span class="sy0">,$</span><span class="br0">&#40;</span><span class="re2">SRCFILES</span><span class="br0">&#41;</span><span class="br0">&#41;</span></pre></div></div>
<p><i>OBJFILES</i> should be clear - a list of the source files, with <i>*.c</i> exchanged for <i>*.o</i>. <i>TSTFILES</i> does the same for the filename suffix <i>*_t</i>, which we will use for our test driver executables.
</p>
<dl><dd><i>Note: This tutorial initially used </i>*.t<i> instead of </i>*_t<i> here; this, however, kept us from handling dependencies for test driver executables seperately from those for library object files, which was necessary. See next section.</i>
</dd></dl>
<h3> <span class="mw-headline" id="Dependencies.2C_pt._1"> Dependencies, pt. 1 </span></h3>
<p>Many people edit their Makefile every time they add/change an <i>#include</i> somewhere in their code. (Or forget to do so, resulting in some scratching of heads.)
</p><p>But most compilers - including <a href="GCC" title="GCC">GCC</a> - can do this automatically for you! Although the approach looks a little backward. For each source file, <i>GCC</i> will create a <i>dependency file</i> (which is canonically made to end in <i>*.d</i>), which contains a Makefile dependency rule listing that source file's includes. (And more, but see below.)
</p><p>We need two seperate sets of dependency files; one for the library objects, and one for the test driver executables (which usually have additional includes, and thus dependencies, not needed for the OBJFILES).
</p>
<div dir="ltr" class="mw-geshi" style="text-align: left;"><div class="make source-make"><pre class="de1">DEPFILES    <span class="sy0">:=</span> <span class="sy0">$</span><span class="br0">&#40;</span><span class="re1">patsubst</span> <span class="sy0">%.</span>c<span class="sy0">,%.</span>d<span class="sy0">,$</span><span class="br0">&#40;</span><span class="re2">SRCFILES</span><span class="br0">&#41;</span><span class="br0">&#41;</span>
TSTDEPFILES <span class="sy0">:=</span> <span class="sy0">$</span><span class="br0">&#40;</span><span class="re1">patsubst</span> <span class="sy0">%,%.</span>d<span class="sy0">,$</span><span class="br0">&#40;</span><span class="re2">TSTFILES</span><span class="br0">&#41;</span><span class="br0">&#41;</span></pre></div></div>
<h3> <span class="mw-headline" id="Distribution_Files"> Distribution Files </span></h3>
<p>The last list is the one with all sources, headers, and auxiliary files that should end up in a distribution tarball.
</p>
<div dir="ltr" class="mw-geshi" style="text-align: left;"><div class="make source-make"><pre class="de1">ALLFILES <span class="sy0">:=</span> <span class="sy0">$</span><span class="br0">&#40;</span><span class="re2">SRCFILES</span><span class="br0">&#41;</span> <span class="sy0">$</span><span class="br0">&#40;</span><span class="re2">HDRFILES</span><span class="br0">&#41;</span> <span class="sy0">$</span><span class="br0">&#40;</span><span class="re2">AUXFILES</span><span class="br0">&#41;</span></pre></div></div>
<h2> <span class="mw-headline" id=".PHONY"> .PHONY </span></h2>
<p>The next one can take you by surprise. When you write a rule for <i>make clean</i>, and there happens to be a file named <i>clean</i> in your working directory, you might be surprised to find that <i>make</i> does nothing, because the "target" of the rule <i>clean</i> already exists. To avoid this, declare such rules as <i>phony</i>, i.e. disable the checking for a file of that name. These will be executed every time:
</p>
<div dir="ltr" class="mw-geshi" style="text-align: left;"><div class="make source-make"><pre class="de1"><span class="kw2">.PHONY</span><span class="sy0">:</span> all clean dist check testdrivers todolist</pre></div></div>
<h2> <span class="mw-headline" id="CFLAGS"> CFLAGS </span></h2>
<p>If you thought <i>-Wall</i> does tell you everything, you'll be in for a rude surprise now. If you don't even use <i>-Wall</i>, shame on you.&#160;;)
</p>
<div dir="ltr" class="mw-geshi" style="text-align: left;"><div class="make source-make"><pre class="de1">WARNINGS <span class="sy0">:=</span> <span class="sy0">-</span>Wall <span class="sy0">-</span>Wextra <span class="sy0">-</span>pedantic <span class="sy0">-</span>Wshadow <span class="sy0">-</span>Wpointer<span class="sy0">-</span>arith <span class="sy0">-</span>Wcast<span class="sy0">-</span>align \
            <span class="sy0">-</span>Wwrite<span class="sy0">-</span>strings <span class="sy0">-</span>Wmissing<span class="sy0">-</span>prototypes <span class="sy0">-</span>Wmissing<span class="sy0">-</span>declarations \
            <span class="sy0">-</span>Wredundant<span class="sy0">-</span>decls <span class="sy0">-</span>Wnested<span class="sy0">-</span>externs <span class="sy0">-</span>Winline <span class="sy0">-</span>Wno<span class="sy0">-</span>long<span class="sy0">-</span>long \
            <span class="sy0">-</span>Wconversion <span class="sy0">-</span>Wstrict<span class="sy0">-</span>prototypes
CFLAGS <span class="sy0">:=</span> <span class="sy0">-</span>g <span class="sy0">-</span>std<span class="sy0">=</span>gnu99 <span class="sy0">$</span><span class="br0">&#40;</span><span class="re2">WARNINGS</span><span class="br0">&#41;</span></pre></div></div>
<p>It is suggested to add new warning options to your project one at a time instead of all at once, to avoid getting swamped in warnings.&#160;;) These flags are merely recommendations for C work. If you use C++, you need different ones. Check out the GCC manual; each major compiler update changes the list of available warning options.
</p>
<h2> <span class="mw-headline" id="Rules"> Rules </span></h2>
<p>Now come the rules, in their typical backward manner (top-level rule first). The topmost rule is the default one (if 'make' is called without an explicit target). It is common practice to have the first rule called "all".
</p>
<h3> <span class="mw-headline" id="Top-Level_Targets"> Top-Level Targets </span></h3>
<div dir="ltr" class="mw-geshi" style="text-align: left;"><div class="make source-make"><pre class="de1">all<span class="sy0">:</span> pdclib<span class="sy0">.</span>a
&#160;
pdclib<span class="sy0">.</span>a<span class="sy0">:</span> <span class="sy0">$</span><span class="br0">&#40;</span><span class="re2">OBJFILES</span><span class="br0">&#41;</span>
	<span class="sy0">@</span>ar r pdclib<span class="sy0">.</span>a <span class="re0">$?</span>
&#160;
clean<span class="sy0">:</span>
	<span class="sy0">-@$</span><span class="br0">&#40;</span><span class="re2">RM</span><span class="br0">&#41;</span> <span class="sy0">$</span><span class="br0">&#40;</span><span class="re1">wildcard</span> <span class="sy0">$</span><span class="br0">&#40;</span><span class="re2">OBJFILES</span><span class="br0">&#41;</span> <span class="sy0">$</span><span class="br0">&#40;</span><span class="re2">DEPFILES</span><span class="br0">&#41;</span> <span class="sy0">$</span><span class="br0">&#40;</span><span class="re2">TSTFILES</span><span class="br0">&#41;</span> pdclib<span class="sy0">.</span>a pdclib<span class="sy0">.</span>tgz<span class="br0">&#41;</span>
&#160;
dist<span class="sy0">:</span>
	<span class="sy0">@</span>tar czf pdclib<span class="sy0">.</span>tgz <span class="sy0">$</span><span class="br0">&#40;</span><span class="re2">ALLFILES</span><span class="br0">&#41;</span></pre></div></div>
<p>The <i>@</i> at the beginning of a line tells <i>make</i> to be quiet, i.e. not to echo the executed commands on the console prior to executing them. The Unix credo is "no news is good news". You don't get a list of processed files with <i>cp</i> or <i>tar</i>, either, so it's completely beyond me why developers chose to have their Makefiles churn out endless lists of useless garbage. One very practical advantage of shutting up <i>make</i> is that you actually get to <i>see</i> those compiler warnings, instead of having them drowned out by noise.
</p><p>The <i>-</i> at the beginning of a line tells <i>make</i> to continue even in case an error is encountered (default behaviour is to terminate the whole build).
</p><p>The <i>$(RM)</i> in the <i>clean</i> rule is the platform-independent command to remove a file.
</p><p>The <i>$?</i> in the <i>pdclib.a</i> rule is an internal variable, which <i>make</i> expands to list all dependencies to the rule <i>which are newer than the target</i>.
</p>
<h3> <span class="mw-headline" id="Automated_Testing.2C_pt._2"> Automated Testing, pt. 2 </span></h3>
<div dir="ltr" class="mw-geshi" style="text-align: left;"><div class="make source-make"><pre class="de1">check<span class="sy0">:</span> testdrivers
	<span class="sy0">-@</span>rc<span class="sy0">=</span><span class="nu0">0</span><span class="sy0">;</span> count<span class="sy0">=</span><span class="nu0">0</span><span class="sy0">;</span> \
        for file in <span class="sy0">$</span><span class="br0">&#40;</span><span class="re2">TSTFILES</span><span class="br0">&#41;</span><span class="sy0">;</span> do \
            echo <span class="st0">&quot; TST     $$file&quot;</span><span class="sy0">;</span> <span class="sy0">./</span><span class="re0">$$</span>file<span class="sy0">;</span> \
            rc<span class="sy0">=</span>`expr <span class="re0">$$</span>rc <span class="sy0">+</span> <span class="re0">$$</span>?`<span class="sy0">;</span> count<span class="sy0">=</span>`expr <span class="re0">$$</span>count <span class="sy0">+</span> <span class="nu0">1</span>`<span class="sy0">;</span> \
        done<span class="sy0">;</span> \
	echo<span class="sy0">;</span> echo <span class="st0">&quot;Tests executed: $$count  Tests failed: $$rc&quot;</span>
&#160;
testdrivers<span class="sy0">:</span> <span class="sy0">$</span><span class="br0">&#40;</span><span class="re2">TSTFILES</span><span class="br0">&#41;</span></pre></div></div>
<p>Call it crude, but it works beautifully for me. The leading <i>-</i> means that 'make' will not abort when encountering an error, but continue with the loop.
</p><p>The <i>echo " TST    $$file"</i> in there is useful in case you get a <i>SEGFAULT</i> or something like that from one of your test drivers. (Without echoing the drivers as they are executed, you would be at a loss as to which one crashed.)
</p>
<h3> <span class="mw-headline" id="Dependencies.2C_pt._2"> Dependencies, pt. 2 </span></h3>
<div dir="ltr" class="mw-geshi" style="text-align: left;"><div class="make source-make"><pre class="de1"><span class="sy0">-</span><span class="kw1">include</span> <span class="sy0">$</span><span class="br0">&#40;</span><span class="re2">DEPFILES</span><span class="br0">&#41;</span> <span class="sy0">$</span><span class="br0">&#40;</span><span class="re2">TSTDEPFILES</span><span class="br0">&#41;</span></pre></div></div>
<p>Further below, you will see how dependency files are <i>generated</i>. Here, we <i>include</i> all of them, i.e. make the dependencies listed in them part of our Makefile. Never mind that they might not even exist when we run our Makefile the first time - the leading "-" again suppresses the errors.
</p>
<h3> <span class="mw-headline" id="Extracting_TODO_Statements"> Extracting TODO Statements </span></h3>
<div dir="ltr" class="mw-geshi" style="text-align: left;"><div class="make source-make"><pre class="de1">todolist<span class="sy0">:</span>
	<span class="sy0">-@</span>for file in <span class="sy0">$</span><span class="br0">&#40;</span>ALLFILES<span class="sy0">:</span>Makefile<span class="sy0">=</span><span class="br0">&#41;</span><span class="sy0">;</span> do fgrep <span class="sy0">-</span>H <span class="sy0">-</span>e TODO <span class="sy0">-</span>e FIXME <span class="re0">$$</span>file<span class="sy0">;</span> done<span class="sy0">;</span> true</pre></div></div>
<p>Taking all files in your project, with exception of the Makefile itself, this will <i>grep</i> all those <i>TODO</i> and <i>FIXME</i> comments from your files, and display them in the terminal. It is nice to be remembered of what is still missing before you do a release. To add another keyword, just insert another <code>-e keyword</code>.
</p>
<dl><dd><b>Note:</b> <i>$(ALLFILES:Makefile=) is a list of everything in $(ALLFILES), except for the string "Makefile" which is replaced with nothing (i.e., removed from the list). This avoids a self-referring match, where the string "TODO" in the grep command would find itself. (Of course, it also avoids finding any *real* TODO's in the Makefile, but there's always a downside.&#160;;-) )</i>
</dd></dl>
<h3> <span class="mw-headline" id="Dependencies.2C_pt._3"> Dependencies, pt. 3 </span></h3>
<p>Now comes the dependency magic I talked about earlier. Note that this needs GCC 3.3 or newer.
</p>
<div dir="ltr" class="mw-geshi" style="text-align: left;"><div class="make source-make"><pre class="de1"><span class="sy0">%.</span>o<span class="sy0">:</span> <span class="sy0">%.</span>c Makefile
	<span class="sy0">@$</span><span class="br0">&#40;</span><span class="re2">CC</span><span class="br0">&#41;</span> <span class="sy0">$</span><span class="br0">&#40;</span><span class="re2">CFLAGS</span><span class="br0">&#41;</span> <span class="sy0">-</span>MMD <span class="sy0">-</span>MP <span class="sy0">-</span>c <span class="re0">$&lt;</span> <span class="sy0">-</span>o <span class="re0">$@</span></pre></div></div>
<p>Isn't it a beauty?&#160;;-)
</p><p>The <i>-MMD</i> flag generates the dependency file (%.d), which will hold (in Makefile syntax) rules making the <i>generated</i> file (%.o in this case) depend on the source file <i>and any non-system headers it includes</i>. That means the object file gets recreated automatically whenever relevant sources are touched. If you want to also depend on system headers (i.e., checking them for updates on each compile), use <i>-MD</i> instead. The <i>-MP</i> option adds empty dummy rules, which avoid errors should header files be removed from the filesystem.
</p><p>Compiling the object file actually looks like a side effect.&#160;;-) 
</p><p>Note that the dependency list of the rule includes the Makefile itself. If you changed e.g. the <i>CFLAGS</i> in the Makefile, you want them to be applied, don't you? Using the $&lt; macro ("first dependency") in the command makes sure we do not attempt to compile the Makefile as C source.
</p><p>Of course we also need a rule for generating the test driver executables (and their dependency files):
</p>
<div dir="ltr" class="mw-geshi" style="text-align: left;"><div class="make source-make"><pre class="de1"><span class="sy0">%</span>_t<span class="sy0">:</span> <span class="sy0">%.</span>c Makefile pdclib<span class="sy0">.</span>a
	<span class="sy0">@$</span><span class="br0">&#40;</span><span class="re2">CC</span><span class="br0">&#41;</span> <span class="sy0">$</span><span class="br0">&#40;</span><span class="re2">CFLAGS</span><span class="br0">&#41;</span> <span class="sy0">-</span>MMD <span class="sy0">-</span>MP <span class="sy0">-</span>DTEST <span class="re0">$&lt;</span> pdclib<span class="sy0">.</span>a <span class="sy0">-</span>o <span class="re0">$@</span></pre></div></div>
<p>Here you can see why test driver executables get a <i>*_t</i> suffix instead of a <i>*.t</i> extension: The <i>-MMD</i> option uses the basename (i.e., filename without extension) of the <i>compiled</i> file as basis for the dependency file. If we would compile the sources into <i>abc.o</i> and <i>abc.t</i>, the dependency files would both be named <i>abc.d</i>, overwriting each other.
</p><p>Other compilers differ a bit in their support for this, so look up their specifics when using something else than <i>GCC</i>.
</p>
<h3> <span class="mw-headline" id="Backups"> Backups </span></h3>
<p>Backing up your files is a perfect candidate of a task that should be automated. However, this is generally achieved through a <a href="Code_Management#Version_Control_Systems" title="Code Management">version control system</a>.
</p><p>Below is an example of a <i>backup</i> target, which creates a dated 7-Zip archive of the directory where the Makefile resides.
</p>
<div dir="ltr" class="mw-geshi" style="text-align: left;"><div class="make source-make"><pre class="de1">THISDIR <span class="sy0">:=</span> <span class="sy0">$</span><span class="br0">&#40;</span><span class="re1">shell</span> basename `pwd`<span class="br0">&#41;</span>
TODAY <span class="sy0">:=</span> <span class="sy0">$</span><span class="br0">&#40;</span><span class="re1">shell</span> date <span class="sy0">+%</span>Y<span class="sy0">-%</span>m<span class="sy0">-%</span>d<span class="br0">&#41;</span>
BACKUPDIR <span class="sy0">:=</span> projectBackups<span class="sy0">/$</span><span class="br0">&#40;</span><span class="re2">TODAY</span><span class="br0">&#41;</span>
&#160;
backup<span class="sy0">:</span> clean
	<span class="sy0">@</span>tar cf <span class="sy0">-</span> <span class="sy0">../$</span><span class="br0">&#40;</span><span class="re2">THISDIR</span><span class="br0">&#41;</span> <span class="sy0">|</span> 7za a <span class="sy0">-</span>si <span class="sy0">../$</span><span class="br0">&#40;</span><span class="re2">BACKUPDIR</span><span class="br0">&#41;</span><span class="sy0">/$</span><span class="br0">&#40;</span><span class="re2">THISDIR</span><span class="br0">&#41;</span><span class="sy0">.$</span><span class="br0">&#40;</span><span class="re2">TODAY</span><span class="br0">&#41;</span>_`date <span class="sy0">+%</span>H<span class="sy0">%</span>M`<span class="sy0">.</span>tar<span class="sy0">.</span>7z</pre></div></div>
<h2> <span class="mw-headline" id="Summary"> Summary </span></h2>
<p>A well-written Makefile can make maintaining a code base much easier, as it can wrap complex command sequences into simple 'make' invocations. Especially for large projects, it also cuts back on compilation times when compared to a dumb "build.sh" script. And, once written, modifications to a well-written Makefile are seldom necessary.
</p>
<h1> <span class="mw-headline" id="Advanced_Techniques"> Advanced Techniques </span></h1>
<p>Some of the stuff we did above already <i>was</i> pretty advanced, and no mistake. But we needed those features for the basic yet convenient setup. Below you will find some even trickier stuff, which might not be for everybody but is immensely helpful <i>if</i> you need it.
</p>
<h2> <span class="mw-headline" id="Conditional_Evaluation"> Conditional Evaluation </span></h2>
<p>Sometimes it is useful to react on the existence or content of certain environment variables. For example, you might have to rely on the path to a certain framework being passed in FRAMEWORK_PATH. Perhaps the error message given by the compiler in case the variable is not set is not helpful, or it takes long until 'make' gets to the point where it actually detects the error. You want to fail early, and with a meaningful error message.
</p><p>Luckily, 'make' allows for conditional evaluation and manual error reporting, quite akin to the C preprocessor:
</p>
<div dir="ltr" class="mw-geshi" style="text-align: left;"><div class="make source-make"><pre class="de1"><span class="kw1">ifndef</span> FRAMEWORK_PATH
    <span class="sy0">$</span><span class="br0">&#40;</span><span class="kw1">error</span> FRAMEWORK_PATH is not set<span class="sy0">.</span> Please set to the path where you installed <span class="st0">&quot;Framework&quot;</span><span class="sy0">.</span><span class="br0">&#41;</span>
<span class="kw1">endif</span>
&#160;
<span class="kw1">ifneq</span> <span class="br0">&#40;</span><span class="sy0">$</span><span class="br0">&#40;</span><span class="re2">FRAMEWORK_PATH</span><span class="br0">&#41;</span><span class="sy0">,/</span>usr<span class="sy0">/</span>lib<span class="sy0">/</span>framework<span class="br0">&#41;</span>
    <span class="sy0">$</span><span class="br0">&#40;</span><span class="kw1">warning</span> FRAMEWORK_PATH is set to <span class="sy0">$</span><span class="br0">&#40;</span><span class="re2">FRAMEWORK_PATH</span><span class="br0">&#41;</span><span class="sy0">,</span> not <span class="sy0">/</span>usr<span class="sy0">/</span>lib<span class="sy0">/</span>framework<span class="sy0">.</span> Are you sure this is correct?<span class="br0">&#41;</span>
<span class="kw1">endif</span></pre></div></div>
<h2> <span class="mw-headline" id="Multi-Target"> Multi-Target </span></h2>
<p>Preliminary work has been done to write an improved Makefile, which allows generating multiple binaries with individual settings while still being easy to configure and use. While this is not yet in "tutorial" format, commented source can be found <a href="http://wiki.osdev.org/User:Solar/Makefile" title="User:Solar/Makefile"> here</a>.
</p>
<h1> <span class="mw-headline" id="See_Also">See Also</span></h1>
<h3> <span class="mw-headline" id="Articles">Articles</span></h3>
<ul><li> <a href="http://wiki.osdev.org/User:Solar/Makefile" title="User:Solar/Makefile">User:Solar/Makefile</a>, A more complex example capable of building multiple executables and libraries from a single Makefile.
</li></ul>
<h3> <span class="mw-headline" id="External_Links">External Links</span></h3>
<ul><li> <a rel="nofollow" class="external text" href="http://jaws.rootdirectory.de">JAWS</a>, a pre-configured <a rel="nofollow" class="external text" href="http://www.cmake.org">CMake</a> setup which, while not geared toward OS development, is a definite step forward from "naked" Makefiles.
</li><li> <a rel="nofollow" class="external text" href="http://aegis.sourceforge.net/auug97.pdf">Recursive Make Considered Harmful</a> by Peter Miller<br />A paper detailing why the traditional approach of recursive make invocations harms performance and reliability.
</li><li> <a rel="nofollow" class="external text" href="http://www.xs4all.nl/~evbergen/nonrecursive-make.html">Implementing non-recursive make</a> by Emile van Bergen<br />Further input on the subject of non-recursive, low-maintenance Makefile creation.
</li><li> <a rel="nofollow" class="external text" href="http://www.gnu.org/software/make/manual/">Manual for GNU make</a>
</li><li> <a rel="nofollow" class="external text" href="https://www.goodreads.com/book/show/583690.Managing_Projects_with_GNU_Make">Managing Projects with GNU Make</a>, the O'Reilly book on GNU Make
</li></ul>
<hr />

<!-- 
NewPP limit report
Preprocessor node count: 367/1000000
Post-expand include size: 340/2097152 bytes
Template argument size: 44/2097152 bytes
Expensive parser function count: 0/100
-->

<!-- Saved in parser cache with key wikidb:pcache:idhash:1785-0!*!0!!en!2!* and timestamp 20180121061452 -->
</div>				<!-- /bodycontent -->
								<!-- printfooter -->
				<div class="printfooter">
				Retrieved from "<a href="http://wiki.osdev.org/index.php?title=Makefile&amp;oldid=21684">http://wiki.osdev.org/index.php?title=Makefile&amp;oldid=21684</a>"				</div>
				<!-- /printfooter -->
												<!-- catlinks -->
				<div id='catlinks' class='catlinks'><div id="mw-normal-catlinks"><a href="http://wiki.osdev.org/Special:Categories" title="Special:Categories">Categories</a>: <ul><li><a href="Category:Level_1_Tutorials" title="Category:Level 1 Tutorials">Level 1 Tutorials</a></li><li><a href="Category:Tutorials" title="Category:Tutorials">Tutorials</a></li><li><a href="Category:Tools" title="Category:Tools">Tools</a></li></ul></div></div>				<!-- /catlinks -->
												<div class="visualClear"></div>
				<!-- debughtml -->
								<!-- /debughtml -->
			</div>
			<!-- /bodyContent -->
		</div>
		<!-- /content -->
		<!-- header -->
		<div id="mw-head" class="noprint">
			
<!-- 0 -->
<div id="p-personal" class="">
	<h5>Personal tools</h5>
	<ul>
		<li id="pt-login"><a href="http://wiki.osdev.org/index.php?title=Special:UserLogin&amp;returnto=Makefile" title="You are encouraged to log in; however, it is not mandatory [o]" accesskey="o">Log in</a></li>
	</ul>
</div>

<!-- /0 -->
			<div id="left-navigation">
				
<!-- 0 -->
<div id="p-namespaces" class="vectorTabs">
	<h5>Namespaces</h5>
	<ul>
					<li  id="ca-nstab-main" class="selected"><span><a href="Makefile"  title="View the content page [c]" accesskey="c">Page</a></span></li>
					<li  id="ca-talk"><span><a href="Talk:Makefile"  title="Discussion about the content page [t]" accesskey="t">Discussion</a></span></li>
			</ul>
</div>

<!-- /0 -->

<!-- 1 -->
<div id="p-variants" class="vectorMenu emptyPortlet">
		<h5><span>Variants</span><a href="Makefile#"></a></h5>
	<div class="menu">
		<ul>
					</ul>
	</div>
</div>

<!-- /1 -->
			</div>
			<div id="right-navigation">
				
<!-- 0 -->
<div id="p-views" class="vectorTabs">
	<h5>Views</h5>
	<ul>
					<li id="ca-view" class="selected"><span><a href="Makefile" >Read</a></span></li>
					<li id="ca-viewsource"><span><a href="http://wiki.osdev.org/index.php?title=Makefile&amp;action=edit"  title="This page is protected.&#10;You can view its source [e]" accesskey="e">View source</a></span></li>
					<li id="ca-history" class="collapsible"><span><a href="http://wiki.osdev.org/index.php?title=Makefile&amp;action=history"  title="Past revisions of this page [h]" accesskey="h">View history</a></span></li>
			</ul>
</div>

<!-- /0 -->

<!-- 1 -->
<div id="p-cactions" class="vectorMenu emptyPortlet">
	<h5><span>Actions</span><a href="Makefile#"></a></h5>
	<div class="menu">
		<ul>
					</ul>
	</div>
</div>

<!-- /1 -->

<!-- 2 -->
<div id="p-search">
	<h5><label for="searchInput">Search</label></h5>
	<form action="http://wiki.osdev.org/index.php" id="searchform">
		<input type='hidden' name="title" value="Special:Search"/>
				<input type="search" name="search" title="Search OSDev Wiki [f]" accesskey="f" id="searchInput" />		<input type="submit" name="go" value="Go" title="Go to a page with this exact name if exists" id="searchGoButton" class="searchButton" />		<input type="submit" name="fulltext" value="Search" title="Search the pages for this text" id="mw-searchButton" class="searchButton" />			</form>
</div>

<!-- /2 -->
			</div>
		</div>
		<!-- /header -->
		<!-- panel -->
			<div id="mw-panel" class="noprint">
				<!-- logo -->
					<div id="p-logo"><a style="background-image: url(/skins/common/images/osdev.png);" href="Main_Page"  title="Visit the main page"></a></div>
				<!-- /logo -->
				
<!-- navigation -->
<div class="portal" id='p-navigation'>
	<h5>Navigation</h5>
	<div class="body">
		<ul>
			<li id="n-mainpage"><a href="/Main_Page" title="Visit the main page [z]" accesskey="z">Main Page</a></li>
			<li id="n-portal"><a href="http://forum.osdev.org/" rel="nofollow" title="About the project, what you can do, where to find things">Forums</a></li>
			<li id="n-FAQ"><a href="/Category:FAQ">FAQ</a></li>
			<li id="n-OS-Projects"><a href="/Projects">OS Projects</a></li>
			<li id="n-randompage"><a href="/Special:Random" title="Load a random page [x]" accesskey="x">Random page</a></li>
		</ul>
	</div>
</div>

<!-- /navigation -->

<!-- about -->
<div class="portal" id='p-about'>
	<h5>About</h5>
	<div class="body">
		<ul>
			<li id="n-This-site"><a href="/OSDevWiki:About">This site</a></li>
			<li id="n-Joining"><a href="/OSDevWiki:Joininskins/common/images/osdev.png);" href="/Main_Page"  title="Visit the main page"></a></div>
				<!-- /logo -->
				
<!-- navigation -->
<div class="portal" id='p-navigation'>
	<h5>Navigation</h5>
	<div class="body">
		<ul>
			<li id="n-mainpage"><a href="Main_Page" title="Visit the main page [z]" accesskey="z">Main Page</a></li>
			<li id="n-portal"><a href="http://forum.osdev.org/" rel="nofollow" title="About the project, what you can do, where to find things">Forums</a></li>
			<li id="n-FAQ"><a href="Category:FAQ">FAQ</a></li>
			<li id="n-OS-Projects"><a href="Projects">OS Projects</a></li>
			<li id="n-randompage"><a href="http://wiki.osdev.org/Special:Random" title="Load a random page [x]" accesskey="x">Random page</a></li>
		</ul>
	</div>
</div>

<!-- /navigation -->

<!-- about -->
<div class="portal" id='p-about'>
	<h5>About</h5>
	<div class="body">
		<ul>
			<li id="n-This-site"><a href="OSDevWiki:About">This site</a></li>
			<li id="n-Joining"><a href="OSDevWiki:Joining">Joining</a></li>
			<li id="n-Editing-help"><a href="OSDevWiki:Editing">Editing help</a></li>
			<li id="n-recentchanges"><a href="http://wiki.osdev.org/Special:RecentChanges" title="A list of recent changes in the wiki [r]" accesskey="r">Recent changes</a></li>
		</ul>
	</div>
</div>

<!-- /about -->

<!-- SEARCH -->

<!-- /SEARCH -->

<!-- TOOLBOX -->
<div class="portal" id='p-tb'>
	<h5>Toolbox</h5>
	<div class="body">
		<ul>
			<li id="t-whatlinkshere"><a href="http://wiki.osdev.org/Special:WhatLinksHere/Makefile" title="A list of all wiki pages that link here [j]" accesskey="j">What links here</a></li>
			<li id="t-recentchangeslinked"><a href="http://wiki.osdev.org/Special:RecentChangesLinked/Makefile" title="Recent changes in pages linked from this page [k]" accesskey="k">Related changes</a></li>
			<li id="t-specialpages"><a href="http://wiki.osdev.org/Special:SpecialPages" title="A list of all special pages [q]" accesskey="q">Special pages</a></li>
			<li><a href="http://wiki.osdev.org/index.php?title=Makefile&amp;printable=yes" rel="alternate">Printable version</a></li>
			<li id="t-permalink"><a href="http://wiki.osdev.org/index.php?title=Makefile&amp;oldid=21684" title="Permanent link to this revision of the page">Permanent link</a></li>
		</ul>
	</div>
</div>

<!-- /TOOLBOX -->

<!-- LANGUAGES -->
<div class="portal" id='p-lang'>
	<h5>In other languages</h5>
	<div class="body">
		<ul>
			<li class="interwiki-de"><a href="http://www.lowlevel.eu/wiki/Makefile" title="Makefile">Deutsch</a></li>
		</ul>
	</div>
</div>

<!-- /LANGUAGES -->
			</div>
		<!-- /panel -->
		<!-- footer -->
		<div id="footer">
							<ul id="footer-info">
											<li id="footer-info-lastmod"> This page was last modified on 13 November 2017, at 19:48.</li>
											<li id="footer-info-viewcount">This page has been accessed 81,045 times.</li>
									</ul>
							<ul id="footer-places">
											<li id="footer-places-privacy"><a href="OSDev_Wiki:Privacy_policy" title="OSDev Wiki:Privacy policy">Privacy policy</a></li>
											<li id="footer-places-about"><a href="OSDev_Wiki:About" title="OSDev Wiki:About">About OSDev Wiki</a></li>
											<li id="footer-places-disclaimer"><a href="OSDev_Wiki:General_disclaimer" title="OSDev Wiki:General disclaimer">Disclaimers</a></li>
									</ul>
										<ul id="footer-icons" class="noprint">
					<li id="footer-poweredbyico">
						<a href="http://www.mediawiki.org/"><img src="skins/common/images/poweredby_mediawiki_88x31.png" alt="Powered by MediaWiki" width="88" height="31" /></a>
					</li>
				</ul>
						<div style="clear:both"></div>
		</div>
		<!-- /footer -->
		<!-- fixalpha -->
		<script type="text/javascript"> if ( window.isMSIE55 ) fixalpha(); </script>
		<!-- /fixalpha -->
		<script src="http://wiki.osdev.org/load.php?debug=false&amp;lang=en&amp;modules=skins.vector&amp;only=scripts&amp;skin=vector&amp;*"></script>
<script>if(window.mw){
	mw.loader.load(["mediawiki.user", "mediawiki.util", "mediawiki.page.ready", "mediawiki.legacy.wikibits", "mediawiki.legacy.ajax"]);
}
</script>
<script src="http://wiki.osdev.org/load.php?debug=false&amp;lang=en&amp;modules=site&amp;only=scripts&amp;skin=vector&amp;*"></script>
<script>if(window.mw){
	mw.user.options.set({"ccmeonemails":0,"cols":80,"date":"default","diffonly":0,"disablemail":0,"disablesuggest":0,"editfont":"default","editondblclick":0,"editsection":1,"editsectiononrightclick":0,"enotifminoredits":0,"enotifrevealaddr":0,"enotifusertalkpages":1,"enotifwatchlistpages":0,"extendwatchlist":0,"externaldiff":0,"externaleditor":0,"fancysig":0,"forceeditsummary":0,"gender":"unknown","hideminor":0,"hidepatrolled":0,"highlightbroken":1,"imagesize":2,"justify":0,"math":1,"minordefault":0,"newpageshidepatrolled":0,"nocache":0,"noconvertlink":0,"norollbackdiff":0,"numberheadings":0,"previewonfirst":0,"previewontop":1,"quickbar":5,"rcdays":7,"rclimit":50,"rememberpassword":0,"rows":25,"searchlimit":20,"showhiddencats":0,"showjumplinks":1,"shownumberswatching":1,"showtoc":1,"showtoolbar":1,"skin":"vector","stubthreshold":0,"thumbsize":2,"underline":2,"uselivepreview":0,"usenewrc":0,"watchcreations":0,"watchdefault":0,"watchdeletion":0,"watchlistdays":3,"watchlisthideanons":0,
	"watchlisthidebots":0,"watchlisthideliu":0,"watchlisthideminor":0,"watchlisthideown":0,"watchlisthidepatrolled":0,"watchmoves":0,"wllimit":250,"variant":"en","language":"en","searchNs0":true,"searchNs1":false,"searchNs2":false,"searchNs3":false,"searchNs4":false,"searchNs5":false,"searchNs6":false,"searchNs7":false,"searchNs8":false,"searchNs9":false,"searchNs10":false,"searchNs11":false,"searchNs12":false,"searchNs13":false,"searchNs14":false,"searchNs15":false});;mw.user.tokens.set({"editToken":"+\\","watchToken":false});;mw.loader.state({"user.options":"ready","user.tokens":"ready"});
	
	/* cache key: wikidb:resourceloader:filter:minify-js:4:19a4b18a9ac79a6b8c60b24af4668814 */
}
</script><!-- Served in 0.033 secs. -->
	</body>
</html>
