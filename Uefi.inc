<!DOCTYPE html>
<html lang="en" dir="ltr" class="client-nojs">
<head>
<title>Uefi.inc - OSDev Wiki</title>
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
	mw.config.set({"wgCanonicalNamespace": "", "wgCanonicalSpecialPageName": false, "wgNamespaceNumber": 0, "wgPageName": "Uefi.inc", "wgTitle": "Uefi.inc", "wgCurRevisionId": 21077, "wgArticleId": 3317, "wgIsArticle": true, "wgAction": "view", "wgUserName": null, "wgUserGroups": ["*"], "wgCategories": ["Lovecraftian", "UEFI", "X86"], "wgBreakFrames": false, "wgRestrictionEdit": [], "wgRestrictionMove": []});
}
</script><script>if(window.mw){
	mw.loader.load(["mediawiki.page.startup"]);
}
</script>
<style type="text/css">/*<![CDATA[*/
.source-asm {line-height: normal;}
.source-asm li, .source-asm pre {
	line-height: normal; border: 0px none white;
}
/**
 * GeSHi Dynamically Generated Stylesheet
 * --------------------------------------
 * Dynamically generated stylesheet for asm
 * CSS class: source-asm, CSS id: 
 * GeSHi (C) 2004 - 2007 Nigel McNie, 2007 - 2008 Benny Baumann
 * (http://qbnz.com/highlighter/ and http://geshi.org/)
 * --------------------------------------
 */
.asm.source-asm .de1, .asm.source-asm .de2 {font: normal normal 1em/1.2em monospace; margin:0; padding:0; background:none; vertical-align:top;}
.asm.source-asm  {font-family:monospace;}
.asm.source-asm .imp {font-weight: bold; color: red;}
.asm.source-asm li, .asm.source-asm .li1 {font-weight: normal; vertical-align:top;}
.asm.source-asm .ln {width:1px;text-align:right;margin:0;padding:0 2px;vertical-align:top;}
.asm.source-asm .li2 {font-weight: bold; vertical-align:top;}
.asm.source-asm .kw1 {color: #00007f; font-weight: bold;}
.asm.source-asm .kw2 {color: #0000ff; font-weight: bold;}
.asm.source-asm .kw3 {color: #00007f;}
.asm.source-asm .kw4 {color: #000000; font-weight: bold;}
.asm.source-asm .kw5 {color: #000000; font-weight: bold;}
.asm.source-asm .co1 {color: #666666; font-style: italic;}
.asm.source-asm .co2 {color: #adadad; font-style: italic;}
.asm.source-asm .es0 {color: #000099; font-weight: bold;}
.asm.source-asm .br0 {color: #009900; font-weight: bold;}
.asm.source-asm .sy0 {color: #339933;}
.asm.source-asm .st0 {color: #7f007f;}
.asm.source-asm .nu0 {color: #0000ff;}
.asm.source-asm .ln-xtra, .asm.source-asm li.ln-xtra, .asm.source-asm div.ln-xtra {background-color: #ffc;}
.asm.source-asm span.xtra { display:block; }

/*]]>*/
</style>
<style type="text/css">/*<![CDATA[*/
@import "http://wiki.osdev.org/index.php?title=MediaWiki:Geshi.css&amp;usemsgcache=yes&amp;action=raw&amp;ctype=text/css&amp;smaxage=18000";
/*]]>*/
</style><!--[if lt IE 7]><style type="text/css">body{behavior:url("/skins/vector/csshover.min.htc")}</style><![endif]--></head>
<body class="mediawiki ltr sitedir-ltr ns-0 ns-subject page-Uefi_inc action-view skin-vector">
		<div id="mw-page-base" class="noprint"></div>
		<div id="mw-head-base" class="noprint"></div>
		<!-- content -->
		<div id="content">
			<a id="top"></a>
			<div id="mw-js-message" style="display:none;"></div>
						<!-- firstHeading -->
			<h1 id="firstHeading" class="firstHeading">Uefi.inc</h1>
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
					Jump to: <a href="Uefi.inc#mw-head">navigation</a>,
					<a href="Uefi.inc#p-search">search</a>
				</div>
				<!-- /jumpto -->
								<!-- bodycontent -->
				<div lang="en" dir="ltr" class="mw-content-ltr"><center>
<table style="border: 1px solid #8f9f8f; padding: .0em .25em .0em; background-color: #a0aaa0; text-align: center;">
<tr>
<td>
<p><img src="http://i.imgur.com/4oMm5jg.png" alt="4oMm5jg.png" />
</p>
</td>
<td>
<p><b>Ph'nglui mglw'nafh Cthulhu R'lyeh wgah'nagl fhtagn!</b>
</p><p><font color="black">The content of this article or section is <a href="Category:Lovecraftian" title="Category:Lovecraftian">Lovecraftian</a>.</font><br />
</p>
</td>
<td>
</td></tr></table>
</center>
<p><br />
<tt>uefi.inc</tt> a library for UEFI written in assembly for fasm. It's main goal was small code, and to achieve that it gives only limited access to UEFI. It was designed to fulfill all the needs of a boot loader, namely
</p>
<ul><li> provide user input interface
</li><li> exactly one way to load and save sectors
</li><li> framebuffer services for output
</li></ul>
<p>It is not intend to be an universal UEFI library.
</p>
<table id="toc" class="toc"><tr><td><div id="toctitle"><h2>Contents</h2></div>
<ul>
<li class="toclevel-1 tocsection-1"><a href="Uefi.inc#Hello_World_from_UEFI"><span class="tocnumber">1</span> <span class="toctext">Hello World from UEFI</span></a></li>
<li class="toclevel-1 tocsection-2"><a href="Uefi.inc#Case_studies:_usage_in_a_boot_loader"><span class="tocnumber">2</span> <span class="toctext">Case studies: usage in a boot loader</span></a>
<ul>
<li class="toclevel-2 tocsection-3"><a href="Uefi.inc#Reading_a_character_from_keyboard"><span class="tocnumber">2.1</span> <span class="toctext">Reading a character from keyboard</span></a></li>
<li class="toclevel-2 tocsection-4"><a href="Uefi.inc#Detecting_Memory_Map"><span class="tocnumber">2.2</span> <span class="toctext">Detecting Memory Map</span></a></li>
<li class="toclevel-2 tocsection-5"><a href="Uefi.inc#Iterating_on_disks"><span class="tocnumber">2.3</span> <span class="toctext">Iterating on disks</span></a></li>
<li class="toclevel-2 tocsection-6"><a href="Uefi.inc#Loading_a_sector_from_device"><span class="tocnumber">2.4</span> <span class="toctext">Loading a sector from device</span></a></li>
<li class="toclevel-2 tocsection-7"><a href="Uefi.inc#Get_sorted_list_of_available_video_modes"><span class="tocnumber">2.5</span> <span class="toctext">Get sorted list of available video modes</span></a></li>
</ul>
</li>
<li class="toclevel-1 tocsection-8"><a href="Uefi.inc#The_include_file"><span class="tocnumber">3</span> <span class="toctext">The include file</span></a></li>
</ul>
</td></tr></table>
<h2> <span class="mw-headline" id="Hello_World_from_UEFI"> Hello World from UEFI </span></h2>
<p>This shows how to import and use the library.
</p>
<div dir="ltr" class="mw-geshi" style="text-align: left;"><div class="asm source-asm"><pre class="de1">format pe64 dll efi
entry main
&#160;
section <span class="st0">'.text'</span> <span class="kw4">code</span> executable readable
&#160;
<span class="kw4">include</span> <span class="st0">'uefi.inc'</span>
&#160;
main<span class="sy0">:</span>
    <span class="co1">; initialize UEFI library</span>
    InitializeLib
    <span class="kw1">jc</span> <span class="kw5">@f</span>
&#160;
    <span class="co1">; call uefi function to print to screen</span>
    uefi_call_wrapper ConOut<span class="sy0">,</span> OutputString<span class="sy0">,</span> ConOut<span class="sy0">,</span> _hello
&#160;
@@<span class="sy0">:</span> <span class="kw1">mov</span> <span class="kw3">eax</span><span class="sy0">,</span> EFI_SUCCESS
    <span class="kw1">retn</span>
&#160;
section <span class="st0">'.data'</span> <span class="kw4">data</span> readable writeable
&#160;
_hello                                  du <span class="st0">'Hello World'</span><span class="sy0">,</span><span class="nu0">13</span><span class="sy0">,</span><span class="nu0">10</span><span class="sy0">,</span><span class="nu0">0</span>
&#160;
section <span class="st0">'.reloc'</span> fixups <span class="kw4">data</span> discardable</pre></div></div>
<h2> <span class="mw-headline" id="Case_studies:_usage_in_a_boot_loader"> Case studies: usage in a boot loader </span></h2>
<p>Please note that these are only tutorials. They focus on a specific topic only. They do not allocate buffers they use for example. You'll have to write that part on your own.
They were written for those who wants to roll their own UEFI boot loader in assembly. I hope it will save them some sleepless nights and headaches.
</p>
<h3> <span class="mw-headline" id="Reading_a_character_from_keyboard"> Reading a character from keyboard </span></h3>
<div dir="ltr" class="mw-geshi" style="text-align: left;"><div class="asm source-asm"><pre class="de1">@@<span class="sy0">:</span>		uefi_call_wrapper	ConIn<span class="sy0">,</span> ReadKeyStroke<span class="sy0">,</span> ConIn<span class="sy0">,</span> key
		<span class="kw1">cmp</span>			<span class="kw5">dword</span> <span class="br0">&#91;</span>key<span class="sy0">.</span>scancode<span class="br0">&#93;</span><span class="sy0">,</span> <span class="nu0">0</span>
		<span class="kw1">jz</span>			<span class="kw5">@b</span>
&#160;
<span class="co1">;data</span>
key<span class="sy0">:</span>
key<span class="sy0">.</span>scancode<span class="sy0">:</span>	<span class="kw4">dw</span> 			<span class="nu0">0</span>
key<span class="sy0">.</span>unicode<span class="sy0">:</span>	du			<span class="nu0">0</span></pre></div></div>
<h3> <span class="mw-headline" id="Detecting_Memory_Map"> Detecting Memory Map </span></h3>
<div dir="ltr" class="mw-geshi" style="text-align: left;"><div class="asm source-asm"><pre class="de1">		<span class="kw1">mov</span>			<span class="kw5">dword</span> <span class="br0">&#91;</span>memmapdescsize<span class="br0">&#93;</span><span class="sy0">,</span> <span class="nu0">48</span>
		uefi_call_wrapper	BootServices<span class="sy0">,</span> GetMemoryMap<span class="sy0">,</span> memmapsize<span class="sy0">,</span> memmapbuff<span class="sy0">,</span> memmapkey<span class="sy0">,</span> memmapdescsize<span class="sy0">,</span> memmapdescver
		<span class="kw1">cmp</span>			<span class="kw5">dword</span> <span class="br0">&#91;</span>memmapdescsize<span class="br0">&#93;</span><span class="sy0">,</span> <span class="nu0">0</span>
		<span class="kw1">jnz</span>			<span class="kw5">@f</span>
		<span class="kw1">mov</span>			<span class="kw5">dword</span> <span class="br0">&#91;</span>memmapdescsize<span class="br0">&#93;</span><span class="sy0">,</span> <span class="nu0">48</span>
@@<span class="sy0">:</span>		<span class="kw1">clc</span>
		<span class="kw1">cmp</span>			<span class="kw3">rax</span><span class="sy0">,</span> EFI_SUCCESS
		<span class="kw1">je</span>			<span class="kw5">@f</span>
		<span class="kw1">stc</span>
@@<span class="sy0">:</span>
&#160;
<span class="co1">;data</span>
memmapsize<span class="sy0">:</span>	<span class="kw4">dq</span>			MEMMAP_BUFFSIZE
memmapkey<span class="sy0">:</span>	<span class="kw4">dq</span>			<span class="nu0">0</span>
memmapdescsize<span class="sy0">:</span>	<span class="kw4">dq</span>			<span class="nu0">0</span>
memmapdescver<span class="sy0">:</span>	<span class="kw4">dq</span>			<span class="nu0">0</span>
memmapbuff<span class="sy0">:</span>	rb			MEMMAP_BUFFSIZE</pre></div></div>
<p>Note that memmapkey is needed for ExitBootServices. If you use memory allocation or free, you'll have to query again map to get a valid key.
</p>
<h3> <span class="mw-headline" id="Iterating_on_disks"> Iterating on disks </span></h3>
<div dir="ltr" class="mw-geshi" style="text-align: left;"><div class="asm source-asm"><pre class="de1">		<span class="co1">; query device handles</span>
		<span class="kw1">mov</span>			<span class="kw5">dword</span> <span class="br0">&#91;</span>tmp<span class="br0">&#93;</span><span class="sy0">,</span> DEVICEHANDLE_BUFFSIZE
		uefi_call_wrapper	BootServices<span class="sy0">,</span> LocateHandle<span class="sy0">,</span> <span class="nu0">2</span><span class="sy0">,</span> blkiouuid<span class="sy0">,</span> <span class="nu0">0</span><span class="sy0">,</span> tmp<span class="sy0">,</span> devicehandle_buff
		<span class="kw1">cmp</span>			<span class="kw3">rax</span><span class="sy0">,</span> EFI_SUCCESS
		<span class="kw1">jne</span>			<span class="sy0">.</span><span class="kw5">error</span>
&#160;
		<span class="co1">; iterate on handles</span>
		<span class="kw1">mov</span>			<span class="kw3">r15</span><span class="sy0">,</span> devicehandle_buff
		<span class="kw1">mov</span>			<span class="kw3">r14</span><span class="sy0">,</span> <span class="kw5">qword</span> <span class="br0">&#91;</span>tmp<span class="br0">&#93;</span>
<span class="sy0">.</span>nexthandle<span class="sy0">:</span>	<span class="kw1">mov</span>			<span class="kw3">rcx</span><span class="sy0">,</span> <span class="kw5">qword</span> <span class="br0">&#91;</span><span class="kw3">r15</span><span class="br0">&#93;</span>
		<span class="kw1">or</span>			<span class="kw3">rcx</span><span class="sy0">,</span> <span class="kw3">rcx</span>
		<span class="kw1">jz</span>			<span class="sy0">.</span><span class="kw4">end</span>
		<span class="co1">; open handle</span>
		<span class="kw1">push</span>			<span class="kw3">r14</span>
		<span class="kw1">push</span>			<span class="kw3">r15</span>
		uefi_call_wrapper	BootServices<span class="sy0">,</span> OpenProtocol<span class="sy0">,</span> <span class="kw3">rcx</span><span class="sy0">,</span> blkiouuid<span class="sy0">,</span> tmp<span class="sy0">,</span> <span class="kw3">rcx</span><span class="sy0">,</span> <span class="nu0">0</span><span class="sy0">,</span> <span class="nu0">2</span>
		<span class="kw1">pop</span>			<span class="kw3">r15</span>
		<span class="kw1">pop</span>			<span class="kw3">r14</span>
		<span class="kw1">cmp</span>			<span class="kw3">rax</span><span class="sy0">,</span> EFI_SUCCESS
		<span class="kw1">jne</span>			<span class="sy0">.</span>skipdev
		<span class="co1">; save results</span>
		<span class="kw1">mov</span>			<span class="kw3">rax</span><span class="sy0">,</span> <span class="kw5">qword</span> <span class="br0">&#91;</span>tmp<span class="br0">&#93;</span>
		<span class="kw1">mov</span>			<span class="kw5">qword</span> <span class="br0">&#91;</span>bootdiskblkio<span class="br0">&#93;</span><span class="sy0">,</span> <span class="kw3">rax</span>
		<span class="co1">; FIXME: do some checks here to decide if it's your device or not</span>
		<span class="co1">; I load GPT from each device and look for a specific UUID for example</span>
		<span class="co1">; cmp ismydevice, 1</span>
		<span class="co1">; je .end</span>
&#160;
<span class="sy0">.</span>skipdev<span class="sy0">:</span>	<span class="kw1">xor</span>			<span class="kw3">rax</span><span class="sy0">,</span> <span class="kw3">rax</span>
		<span class="kw1">mov</span>			<span class="kw5">qword</span> <span class="br0">&#91;</span>bootdiskblkio<span class="br0">&#93;</span><span class="sy0">,</span> <span class="kw3">rax</span>
		<span class="kw1">pop</span>			<span class="kw3">r15</span>
		<span class="kw1">pop</span>			<span class="kw3">r14</span>
		<span class="kw1">add</span>			<span class="kw3">r15</span><span class="sy0">,</span> <span class="nu0">8</span>
		<span class="kw1">sub</span>			<span class="kw3">r14</span><span class="sy0">,</span> <span class="nu0">8</span>
		<span class="kw1">js</span>			<span class="sy0">.</span><span class="kw5">error</span>
		<span class="kw1">jnz</span>			<span class="sy0">.</span>nexthandle
&#160;
<span class="sy0">.</span><span class="kw4">end</span><span class="sy0">:</span>		<span class="kw1">clc</span>
		<span class="kw1">ret</span>
&#160;
<span class="sy0">.</span><span class="kw5">error</span><span class="sy0">:</span>		<span class="kw1">stc</span>
		<span class="kw1">ret</span>
&#160;
<span class="co1">;data</span>
tmp<span class="sy0">:</span>		<span class="kw4">dq</span>			<span class="nu0">0</span>
blkiouuid<span class="sy0">:</span>	<span class="kw4">db</span>			EFI_BLOCK_IO_PROTOCOL_UUID
bootdiskblkio<span class="sy0">:</span>	<span class="kw4">dq</span>			<span class="nu0">0</span></pre></div></div>
<h3> <span class="mw-headline" id="Loading_a_sector_from_device"> Loading a sector from device </span></h3>
<div dir="ltr" class="mw-geshi" style="text-align: left;"><div class="asm source-asm"><pre class="de1">		<span class="kw1">mov</span>			<span class="kw3">rax</span><span class="sy0">,</span> <span class="kw5">qword</span> <span class="br0">&#91;</span>bootdiskblkio<span class="br0">&#93;</span>
		<span class="kw1">stc</span>
		<span class="kw1">or</span>			<span class="kw3">rax</span><span class="sy0">,</span> <span class="kw3">rax</span>
		<span class="kw1">jz</span>			<span class="kw5">@f</span>
		<span class="kw1">mov</span>			<span class="kw3">rbx</span><span class="sy0">,</span> <span class="kw3">rax</span>
		<span class="kw1">mov</span>			<span class="kw3">rcx</span><span class="sy0">,</span> <span class="kw3">rax</span>
		<span class="kw1">mov</span>			<span class="kw3">rax</span><span class="sy0">,</span> <span class="kw5">qword</span> <span class="br0">&#91;</span><span class="kw3">rax</span><span class="sy0">+</span>EFI_BLOCK_IO_PROTOCOL<span class="sy0">.</span>Media<span class="br0">&#93;</span>
		<span class="kw1">or</span>			<span class="kw3">rax</span><span class="sy0">,</span> <span class="kw3">rax</span>
		<span class="kw1">jz</span>			<span class="kw5">@f</span>
		<span class="kw1">mov</span>			<span class="kw3">edx</span><span class="sy0">,</span> <span class="kw5">dword</span> <span class="br0">&#91;</span><span class="kw3">rax</span><span class="sy0">+</span>EFI_BLOCK_IO_MEDIA<span class="sy0">.</span>MediaId<span class="br0">&#93;</span>
		<span class="kw1">or</span>			<span class="kw3">edx</span><span class="sy0">,</span> <span class="kw3">edx</span>
		<span class="kw1">jz</span>			<span class="kw5">@f</span>
		<span class="kw1">xor</span>			<span class="kw3">rax</span><span class="sy0">,</span> <span class="kw3">rax</span>
		uefi_call_wrapper	<span class="kw3">rbx</span><span class="sy0">,</span> EFI_BLOCK_IO_PROTOCOL<span class="sy0">.</span>ReadBlocks<span class="sy0">,</span> <span class="kw3">rcx</span><span class="sy0">,</span> <span class="kw3">rdx</span><span class="sy0">,</span> <span class="kw5">qword</span> <span class="br0">&#91;</span>lba<span class="br0">&#93;</span><span class="sy0">,</span> <span class="kw5">qword</span> <span class="br0">&#91;</span>sizeinbytes<span class="br0">&#93;</span><span class="sy0">,</span> diskbuff
		<span class="kw1">stc</span>
		<span class="kw1">cmp</span>			<span class="kw3">rax</span><span class="sy0">,</span> EFI_SUCCESS
		<span class="kw1">jne</span>			<span class="kw5">@f</span>
		<span class="kw1">clc</span>
@@<span class="sy0">:</span>
&#160;
<span class="co1">;data</span>
lba<span class="sy0">:</span>		<span class="kw4">dq</span>			<span class="nu0">0</span>
sizeinbytes<span class="sy0">:</span>	<span class="kw4">dq</span>			<span class="nu0">0</span>
diskbuff<span class="sy0">:</span>	rb			DISK_BUFFSIZE</pre></div></div>
<h3> <span class="mw-headline" id="Get_sorted_list_of_available_video_modes"> Get sorted list of available video modes </span></h3>
<div dir="ltr" class="mw-geshi" style="text-align: left;"><div class="asm source-asm"><pre class="de1">		<span class="co1">; installation check on GOP. This must return buffer too small if GOP supported</span>
		<span class="kw1">xor</span>			<span class="kw3">rax</span><span class="sy0">,</span> <span class="kw3">rax</span>
		<span class="kw1">mov</span>			<span class="kw5">qword</span> <span class="br0">&#91;</span>tmp<span class="br0">&#93;</span><span class="sy0">,</span> <span class="kw3">rax</span>
		uefi_call_wrapper	BootServices<span class="sy0">,</span> LocateHandle<span class="sy0">,</span> <span class="nu0">2</span><span class="sy0">,</span> gopuuid<span class="sy0">,</span> <span class="nu0">0</span><span class="sy0">,</span> tmp<span class="sy0">,</span> gop_handle
		<span class="kw1">cmp</span>			<span class="kw3">rax</span><span class="sy0">,</span> EFI_BUFFER_TOO_SMALL
		<span class="kw1">jne</span>			<span class="sy0">.</span><span class="kw5">error</span>
		<span class="co1">; query available video modes</span>
		<span class="kw1">mov</span>			<span class="kw5">dword</span> <span class="br0">&#91;</span>tmp<span class="br0">&#93;</span><span class="sy0">,</span> MODE_BUFFSIZE
		uefi_call_wrapper	BootServices<span class="sy0">,</span> LocateHandle<span class="sy0">,</span> <span class="nu0">2</span><span class="sy0">,</span> gopuuid<span class="sy0">,</span> <span class="nu0">0</span><span class="sy0">,</span> tmp<span class="sy0">,</span> <span class="kw5">qword</span> <span class="br0">&#91;</span>tmpbuff<span class="br0">&#93;</span>
		<span class="kw1">cmp</span>			<span class="kw3">rax</span><span class="sy0">,</span> EFI_SUCCESS
		<span class="kw1">jne</span>			<span class="sy0">.</span><span class="kw5">error</span>
		<span class="co1">; iterate on each handle, store sorted result to gopmodes</span>
		<span class="kw1">mov</span>			<span class="kw3">rsi</span><span class="sy0">,</span> <span class="kw5">qword</span> <span class="br0">&#91;</span>tmpbuff<span class="br0">&#93;</span>
		<span class="kw1">lea</span>			<span class="kw3">rdi</span><span class="sy0">,</span> <span class="br0">&#91;</span>gopmodes<span class="br0">&#93;</span>
<span class="sy0">.</span>getnextinfo<span class="sy0">:</span>	lodsq
		<span class="kw1">or</span>			<span class="kw3">rax</span><span class="sy0">,</span> <span class="kw3">rax</span>
		<span class="kw1">jz</span>			<span class="sy0">.</span>nomore
		<span class="kw1">mov</span>			<span class="kw5">qword</span> <span class="br0">&#91;</span>tmp<span class="br0">&#93;</span><span class="sy0">,</span> <span class="kw3">rax</span>
		<span class="kw1">mov</span>			<span class="kw5">qword</span> <span class="br0">&#91;</span><span class="kw3">rdi</span><span class="br0">&#93;</span><span class="sy0">,</span> <span class="kw3">rax</span>
		<span class="kw1">push</span>			<span class="kw3">rsi</span>
		<span class="kw1">push</span>			<span class="kw3">rdi</span>
		uefi_call_wrapper	BootServices<span class="sy0">,</span> HandleProtocol<span class="sy0">,</span> <span class="kw5">qword</span> <span class="br0">&#91;</span>tmp<span class="br0">&#93;</span><span class="sy0">,</span> gopuuid<span class="sy0">,</span> gopinterface
		<span class="kw1">pop</span>			<span class="kw3">rdi</span>
		<span class="kw1">pop</span>			<span class="kw3">rsi</span>
		<span class="kw1">cmp</span>			<span class="kw3">rax</span><span class="sy0">,</span> EFI_SUCCESS
		<span class="kw1">jne</span>			<span class="sy0">.</span><span class="kw5">error</span>
		<span class="co1">; iterate on each mode for a handle</span>
		<span class="co1">; get number of modes</span>
		<span class="kw1">mov</span>			<span class="kw3">rcx</span><span class="sy0">,</span> <span class="kw5">qword</span> <span class="br0">&#91;</span>gopinterface<span class="br0">&#93;</span>
		<span class="kw1">mov</span>			<span class="kw3">r10</span><span class="sy0">,</span> <span class="kw5">qword</span> <span class="br0">&#91;</span><span class="kw3">rcx</span> <span class="sy0">+</span> EFI_GRAPHICS_OUTPUT_PROTOCOL<span class="sy0">.</span>Mode<span class="br0">&#93;</span>
		<span class="kw1">mov</span>			<span class="kw3">r10</span><span class="sy0">,</span> <span class="kw5">qword</span> <span class="br0">&#91;</span><span class="kw3">r10</span> <span class="sy0">+</span> EFI_GRAPHICS_OUTPUT_PROTOCOL_MODE<span class="sy0">.</span>MaxMode<span class="br0">&#93;</span>
		<span class="kw1">xor</span>			<span class="kw3">rdx</span><span class="sy0">,</span> <span class="kw3">rdx</span>
<span class="sy0">.</span>nextmode<span class="sy0">:</span>	<span class="kw1">mov</span>			<span class="kw3">rcx</span><span class="sy0">,</span> <span class="kw5">qword</span> <span class="br0">&#91;</span>gopinterface<span class="br0">&#93;</span>
		<span class="kw1">mov</span>			<span class="kw5">qword</span> <span class="br0">&#91;</span><span class="kw3">rdi</span><span class="sy0">+</span><span class="nu0">8</span><span class="br0">&#93;</span><span class="sy0">,</span> <span class="kw3">rcx</span>
		<span class="kw1">push</span>			<span class="kw3">rsi</span>
		<span class="kw1">push</span>			<span class="kw3">rdi</span>
		<span class="kw1">mov</span>			<span class="kw5">dword</span> <span class="br0">&#91;</span>tmp<span class="br0">&#93;</span><span class="sy0">,</span> <span class="nu0">8</span>
		<span class="kw1">lea</span>			<span class="kw3">r8</span><span class="sy0">,</span> <span class="br0">&#91;</span>tmp<span class="br0">&#93;</span>
		<span class="kw1">lea</span>			<span class="kw3">r9</span><span class="sy0">,</span> <span class="br0">&#91;</span>gopinfo<span class="br0">&#93;</span>
		<span class="kw1">push</span>			<span class="kw3">rcx</span>
		<span class="kw1">push</span>			<span class="kw3">rdx</span>
		<span class="kw1">push</span>			<span class="kw3">r10</span>
		uefi_call_wrapper	<span class="kw3">rcx</span><span class="sy0">,</span> EFI_GRAPHICS_OUTPUT_PROTOCOL<span class="sy0">.</span>QueryMode<span class="sy0">,</span> <span class="kw3">rcx</span><span class="sy0">,</span> <span class="kw3">rdx</span><span class="sy0">,</span> <span class="kw3">r8</span><span class="sy0">,</span> <span class="kw3">r9</span>
		<span class="kw1">pop</span>			<span class="kw3">r10</span>
		<span class="kw1">pop</span>			<span class="kw3">rdx</span>
		<span class="kw1">pop</span>			<span class="kw3">rcx</span>
		<span class="kw1">pop</span>			<span class="kw3">rdi</span>
		<span class="kw1">pop</span>			<span class="kw3">rsi</span>
		<span class="kw1">cmp</span>			<span class="kw3">rax</span><span class="sy0">,</span> EFI_SUCCESS
		<span class="kw1">jne</span>			<span class="sy0">.</span><span class="kw5">error</span>
		<span class="co1">; save info to gopmodes</span>
		<span class="kw1">mov</span>			<span class="kw3">r9</span><span class="sy0">,</span> <span class="kw5">qword</span> <span class="br0">&#91;</span>gopinfo<span class="br0">&#93;</span>
		<span class="kw1">mov</span>			<span class="kw3">eax</span><span class="sy0">,</span> <span class="kw5">dword</span> <span class="br0">&#91;</span><span class="kw3">r9</span><span class="sy0">+</span>EFI_GRAPHICS_OUTPUT_MODE_INFORMATION<span class="sy0">.</span>HorizontalResolution<span class="br0">&#93;</span>
		<span class="kw1">mov</span>			<span class="kw5">word</span> <span class="br0">&#91;</span><span class="kw3">rdi</span><span class="sy0">+</span><span class="nu0">16</span><span class="br0">&#93;</span><span class="sy0">,</span> <span class="kw3">ax</span>
		<span class="kw1">mov</span>			<span class="kw3">eax</span><span class="sy0">,</span> <span class="kw5">dword</span> <span class="br0">&#91;</span><span class="kw3">r9</span><span class="sy0">+</span>EFI_GRAPHICS_OUTPUT_MODE_INFORMATION<span class="sy0">.</span>VerticalResolution<span class="br0">&#93;</span>
		<span class="kw1">mov</span>			<span class="kw5">word</span> <span class="br0">&#91;</span><span class="kw3">rdi</span><span class="sy0">+</span><span class="nu0">18</span><span class="br0">&#93;</span><span class="sy0">,</span> <span class="kw3">ax</span>
		<span class="kw1">mov</span>			<span class="kw3">eax</span><span class="sy0">,</span> <span class="kw5">dword</span> <span class="br0">&#91;</span><span class="kw3">r9</span><span class="sy0">+</span>EFI_GRAPHICS_OUTPUT_MODE_INFORMATION<span class="sy0">.</span>PixelsPerScanline<span class="br0">&#93;</span>
		<span class="kw1">mov</span>			<span class="kw5">word</span> <span class="br0">&#91;</span><span class="kw3">rdi</span><span class="sy0">+</span><span class="nu0">20</span><span class="br0">&#93;</span><span class="sy0">,</span> <span class="kw3">ax</span>
		<span class="kw1">mov</span>			<span class="kw3">ax</span><span class="sy0">,</span> <span class="kw5">word</span> <span class="br0">&#91;</span><span class="kw3">r9</span><span class="sy0">+</span>EFI_GRAPHICS_OUTPUT_MODE_INFORMATION<span class="sy0">.</span>PixelFormat<span class="br0">&#93;</span>
		<span class="kw1">mov</span>			<span class="kw5">word</span> <span class="br0">&#91;</span><span class="kw3">rdi</span><span class="sy0">+</span><span class="nu0">22</span><span class="br0">&#93;</span><span class="sy0">,</span> <span class="kw3">ax</span>
		<span class="kw1">mov</span>			<span class="kw5">dword</span> <span class="br0">&#91;</span><span class="kw3">rdi</span><span class="sy0">+</span><span class="nu0">24</span><span class="br0">&#93;</span><span class="sy0">,</span> <span class="kw3">edx</span>
		<span class="co1">;bubble up mode</span>
		<span class="kw1">mov</span>			<span class="kw3">rbx</span><span class="sy0">,</span> <span class="kw3">rdi</span>
<span class="sy0">.</span>bubble<span class="sy0">:</span>		<span class="kw1">mov</span>			<span class="kw3">ax</span><span class="sy0">,</span> <span class="kw5">word</span> <span class="br0">&#91;</span><span class="kw3">rdi</span><span class="sy0">+</span><span class="nu0">16</span><span class="br0">&#93;</span>
		<span class="kw1">cmp</span>			<span class="kw5">word</span> <span class="br0">&#91;</span><span class="kw3">rdi</span><span class="sy0">+</span><span class="nu0">16</span><span class="sy0">-</span><span class="nu0">32</span><span class="br0">&#93;</span><span class="sy0">,</span> <span class="kw3">ax</span>
		<span class="kw1">ja</span>			<span class="sy0">.</span>ok2
		<span class="kw1">jb</span>			<span class="sy0">.</span>switch
		<span class="kw1">mov</span>			<span class="kw3">ax</span><span class="sy0">,</span> <span class="kw5">word</span> <span class="br0">&#91;</span><span class="kw3">rdi</span><span class="sy0">+</span><span class="nu0">18</span><span class="br0">&#93;</span>
		<span class="kw1">cmp</span>			<span class="kw5">word</span> <span class="br0">&#91;</span><span class="kw3">rdi</span><span class="sy0">+</span><span class="nu0">18</span><span class="sy0">-</span><span class="nu0">32</span><span class="br0">&#93;</span><span class="sy0">,</span> <span class="kw3">ax</span>
		<span class="kw1">jae</span>			<span class="kw5">@f</span>
<span class="sy0">.</span>switch<span class="sy0">:</span>		<span class="kw1">mov</span>			<span class="kw3">rax</span><span class="sy0">,</span> <span class="kw5">qword</span> <span class="br0">&#91;</span><span class="kw3">rdi</span><span class="br0">&#93;</span>
		<span class="kw1">xchg</span>			<span class="kw5">qword</span> <span class="br0">&#91;</span><span class="kw3">rdi</span><span class="sy0">-</span><span class="nu0">32</span><span class="br0">&#93;</span><span class="sy0">,</span> <span class="kw3">rax</span>
		<span class="kw1">mov</span>			<span class="kw5">qword</span> <span class="br0">&#91;</span><span class="kw3">rdi</span><span class="br0">&#93;</span><span class="sy0">,</span> <span class="kw3">rax</span>
		<span class="kw1">mov</span>			<span class="kw3">rax</span><span class="sy0">,</span> <span class="kw5">qword</span> <span class="br0">&#91;</span><span class="kw3">rdi</span><span class="sy0">+</span><span class="nu0">8</span><span class="br0">&#93;</span>
		<span class="kw1">xchg</span>			<span class="kw5">qword</span> <span class="br0">&#91;</span><span class="kw3">rdi</span><span class="sy0">-</span><span class="nu0">32</span><span class="sy0">+</span><span class="nu0">8</span><span class="br0">&#93;</span><span class="sy0">,</span> <span class="kw3">rax</span>
		<span class="kw1">mov</span>			<span class="kw5">qword</span> <span class="br0">&#91;</span><span class="kw3">rdi</span><span class="sy0">+</span><span class="nu0">8</span><span class="br0">&#93;</span><span class="sy0">,</span> <span class="kw3">rax</span>
		<span class="kw1">mov</span>			<span class="kw3">rax</span><span class="sy0">,</span> <span class="kw5">qword</span> <span class="br0">&#91;</span><span class="kw3">rdi</span><span class="sy0">+</span><span class="nu0">16</span><span class="br0">&#93;</span>
		<span class="kw1">xchg</span>			<span class="kw5">qword</span> <span class="br0">&#91;</span><span class="kw3">rdi</span><span class="sy0">-</span><span class="nu0">32</span><span class="sy0">+</span><span class="nu0">16</span><span class="br0">&#93;</span><span class="sy0">,</span> <span class="kw3">rax</span>
		<span class="kw1">mov</span>			<span class="kw5">qword</span> <span class="br0">&#91;</span><span class="kw3">rdi</span><span class="sy0">+</span><span class="nu0">16</span><span class="br0">&#93;</span><span class="sy0">,</span> <span class="kw3">rax</span>
		<span class="kw1">mov</span>			<span class="kw3">rax</span><span class="sy0">,</span> <span class="kw5">qword</span> <span class="br0">&#91;</span><span class="kw3">rdi</span><span class="sy0">+</span><span class="nu0">24</span><span class="br0">&#93;</span>
		<span class="kw1">xchg</span>			<span class="kw5">qword</span> <span class="br0">&#91;</span><span class="kw3">rdi</span><span class="sy0">-</span><span class="nu0">32</span><span class="sy0">+</span><span class="nu0">24</span><span class="br0">&#93;</span><span class="sy0">,</span> <span class="kw3">rax</span>
		<span class="kw1">mov</span>			<span class="kw5">qword</span> <span class="br0">&#91;</span><span class="kw3">rdi</span><span class="sy0">+</span><span class="nu0">24</span><span class="br0">&#93;</span><span class="sy0">,</span> <span class="kw3">rax</span>
		<span class="kw1">sub</span>			<span class="kw3">rdi</span><span class="sy0">,</span> <span class="nu0">32</span>
		<span class="kw1">cmp</span>			<span class="kw3">rdi</span><span class="sy0">,</span> gopmodes
		<span class="kw1">jae</span>			<span class="sy0">.</span>bubble
@@<span class="sy0">:</span>		<span class="kw1">mov</span>			<span class="kw3">rdi</span><span class="sy0">,</span> <span class="kw3">rbx</span>
		<span class="kw1">add</span>			<span class="kw3">rdi</span><span class="sy0">,</span> <span class="nu0">32</span>
<span class="sy0">.</span><span class="kw1">loop</span><span class="sy0">:</span>		<span class="kw1">inc</span>			<span class="kw3">rdx</span>
		<span class="kw1">cmp</span>			<span class="kw3">edx</span><span class="sy0">,</span> <span class="kw3">r10d</span>
		<span class="kw1">jb</span>			<span class="sy0">.</span>nextmode
		<span class="kw1">jmp</span>			<span class="sy0">.</span>getnextinfo
<span class="sy0">.</span><span class="kw5">error</span><span class="sy0">:</span>		<span class="kw1">xor</span>			<span class="kw3">rax</span><span class="sy0">,</span> <span class="kw3">rax</span>
		<span class="kw1">mov</span>			<span class="kw5">qword</span> <span class="br0">&#91;</span>gopinterface<span class="br0">&#93;</span><span class="sy0">,</span> <span class="kw3">rax</span>
		<span class="kw1">stc</span>
<span class="sy0">.</span>nomore<span class="sy0">:</span>
&#160;
<span class="co1">;data</span>
tmp<span class="sy0">:</span>		<span class="kw4">dq</span>			<span class="nu0">0</span>
tmpbuff<span class="sy0">:</span>	<span class="kw4">dq</span>			<span class="nu0">0</span>
gopuuid<span class="sy0">:</span>	<span class="kw4">db</span>			EFI_GRAPHICS_OUTPUT_PROTOCOL_UUID
gop_handle<span class="sy0">:</span>	<span class="kw4">dq</span>			<span class="nu0">0</span>
gopinterface<span class="sy0">:</span>	<span class="kw4">dq</span>			<span class="nu0">0</span>
gopinfo<span class="sy0">:</span>	<span class="kw4">dq</span>			<span class="nu0">0</span>
<span class="co1">;output, sorted list of 32 byte entries</span>
<span class="co1">;  8 bytes handle</span>
<span class="co1">;  8 bytes interface</span>
<span class="co1">;  2 bytes horizontal resolution</span>
<span class="co1">;  2 bytes vertical resolution</span>
<span class="co1">;  2 bytes scanline</span>
<span class="co1">;  2 bytes pixelformat</span>
<span class="co1">;  8 bytes mode number</span>
gopmodes<span class="sy0">:</span>	rb			MODE_BUFFSIZE</pre></div></div>
<p>To access framebuffer, you'll have to get it's address. This code returns it in rbx, and buffer's size in rcx:
</p>
<div dir="ltr" class="mw-geshi" style="text-align: left;"><div class="asm source-asm"><pre class="de1">		<span class="kw1">mov</span>			<span class="kw3">rax</span><span class="sy0">,</span> <span class="kw5">qword</span> <span class="br0">&#91;</span>gopinterface<span class="br0">&#93;</span>
		<span class="kw1">mov</span>			<span class="kw3">rax</span><span class="sy0">,</span> <span class="kw5">qword</span> <span class="br0">&#91;</span><span class="kw3">rax</span> <span class="sy0">+</span> EFI_GRAPHICS_OUTPUT_PROTOCOL<span class="sy0">.</span>Mode<span class="br0">&#93;</span>
		<span class="kw1">mov</span>			<span class="kw3">rbx</span><span class="sy0">,</span> <span class="kw5">qword</span> <span class="br0">&#91;</span><span class="kw3">rax</span> <span class="sy0">+</span> EFI_GRAPHICS_OUTPUT_PROTOCOL_MODE<span class="sy0">.</span>FrameBufferBase<span class="br0">&#93;</span>
		<span class="kw1">mov</span>			<span class="kw3">rcx</span><span class="sy0">,</span> <span class="kw5">qword</span> <span class="br0">&#91;</span><span class="kw3">rax</span> <span class="sy0">+</span> EFI_GRAPHICS_OUTPUT_PROTOCOL_MODE<span class="sy0">.</span>FrameBufferSize<span class="br0">&#93;</span></pre></div></div>
<h2> <span class="mw-headline" id="The_include_file"> The include file </span></h2>
<p>And finally the library that makes the magic alive:
</p>
<div dir="ltr" class="mw-geshi" style="text-align: left;"><div class="asm source-asm"><pre class="de1"><span class="co1">;*********************************************************************</span>
<span class="co1">;*                                                                   *</span>
<span class="co1">;*          UEFI library for fasm by bzt, Public Domain              *</span>
<span class="co1">;*                                                                   *</span>
<span class="co1">;*********************************************************************</span>
&#160;
<span class="co1">; include x86asm.net's efi.inc</span>
<span class="co1">;include 'efi.inc'</span>
<span class="kw4">struc</span> int8 <span class="br0">&#123;</span>
  <span class="sy0">.</span> <span class="kw4">db</span>&#160;?
<span class="br0">&#125;</span>
<span class="kw4">struc</span> int16 <span class="br0">&#123;</span>
  <span class="kw4">align</span> <span class="nu0">2</span>
  <span class="sy0">.</span> <span class="kw4">dw</span>&#160;?
<span class="br0">&#125;</span>
<span class="kw4">struc</span> int32 <span class="br0">&#123;</span>
  <span class="kw4">align</span> <span class="nu0">4</span>
  <span class="sy0">.</span> <span class="kw4">dd</span>&#160;?
<span class="br0">&#125;</span>
<span class="kw4">struc</span> int64 <span class="br0">&#123;</span>
  <span class="kw4">align</span> <span class="nu0">8</span>
  <span class="sy0">.</span> <span class="kw4">dq</span>&#160;?
<span class="br0">&#125;</span>
<span class="kw4">struc</span> intn <span class="br0">&#123;</span>
  <span class="kw4">align</span> <span class="nu0">8</span>
  <span class="sy0">.</span> <span class="kw4">dq</span>&#160;?
<span class="br0">&#125;</span>
<span class="kw4">struc</span> dptr <span class="br0">&#123;</span>
  <span class="kw4">align</span> <span class="nu0">8</span>
  <span class="sy0">.</span> <span class="kw4">dq</span>&#160;?
<span class="br0">&#125;</span>
&#160;
<span class="co1">;symbols</span>
&#160;
EFIERR = <span class="nu0">0x8000000000000000</span>
EFI_SUCCESS			= <span class="nu0">0</span>
EFI_LOAD_ERROR			= EFIERR <span class="kw1">or</span> <span class="nu0">1</span>
EFI_INVALID_PARAMETER		= EFIERR <span class="kw1">or</span> <span class="nu0">2</span>
EFI_UNSUPPORTED 		= EFIERR <span class="kw1">or</span> <span class="nu0">3</span>
EFI_BAD_BUFFER_SIZE		= EFIERR <span class="kw1">or</span> <span class="nu0">4</span>
EFI_BUFFER_TOO_SMALL		= EFIERR <span class="kw1">or</span> <span class="nu0">5</span>
EFI_NOT_READY			= EFIERR <span class="kw1">or</span> <span class="nu0">6</span>
EFI_DEVICE_ERROR		= EFIERR <span class="kw1">or</span> <span class="nu0">7</span>
EFI_WRITE_PROTECTED		= EFIERR <span class="kw1">or</span> <span class="nu0">8</span>
EFI_OUT_OF_RESOURCES		= EFIERR <span class="kw1">or</span> <span class="nu0">9</span>
EFI_VOLUME_CORRUPTED		= EFIERR <span class="kw1">or</span> <span class="nu0">10</span>
EFI_VOLUME_FULL 		= EFIERR <span class="kw1">or</span> <span class="nu0">11</span>
EFI_NO_MEDIA			= EFIERR <span class="kw1">or</span> <span class="nu0">12</span>
EFI_MEDIA_CHANGED		= EFIERR <span class="kw1">or</span> <span class="nu0">13</span>
EFI_NOT_FOUND			= EFIERR <span class="kw1">or</span> <span class="nu0">14</span>
EFI_ACCESS_DENIED		= EFIERR <span class="kw1">or</span> <span class="nu0">15</span>
EFI_NO_RESPONSE 		= EFIERR <span class="kw1">or</span> <span class="nu0">16</span>
EFI_NO_MAPPING			= EFIERR <span class="kw1">or</span> <span class="nu0">17</span>
EFI_TIMEOUT			= EFIERR <span class="kw1">or</span> <span class="nu0">18</span>
EFI_NOT_STARTED 		= EFIERR <span class="kw1">or</span> <span class="nu0">19</span>
EFI_ALREADY_STARTED		= EFIERR <span class="kw1">or</span> <span class="nu0">20</span>
EFI_ABORTED			= EFIERR <span class="kw1">or</span> <span class="nu0">21</span>
EFI_ICMP_ERROR			= EFIERR <span class="kw1">or</span> <span class="nu0">22</span>
EFI_TFTP_ERROR			= EFIERR <span class="kw1">or</span> <span class="nu0">23</span>
EFI_PROTOCOL_ERROR		= EFIERR <span class="kw1">or</span> <span class="nu0">24</span>
&#160;
<span class="co1">;helper macro for definition of relative structure member offsets</span>
&#160;
<span class="kw4">macro</span> <span class="kw4">struct</span> <span class="kw4">name</span>
<span class="br0">&#123;</span>
  virtual <span class="kw5">at</span> <span class="nu0">0</span>
    <span class="kw4">name</span> <span class="kw4">name</span>
  <span class="kw4">end</span> virtual
<span class="br0">&#125;</span>
&#160;
<span class="co1">;structures</span>
EFI_SYSTEM_TABLE_SIGNATURE	equ	<span class="nu0">49h</span><span class="sy0">,</span><span class="nu0">42h</span><span class="sy0">,</span><span class="nu0">49h</span><span class="sy0">,</span><span class="nu0">20h</span><span class="sy0">,</span><span class="nu0">53h</span><span class="sy0">,</span><span class="nu0">59h</span><span class="sy0">,</span><span class="nu0">53h</span><span class="sy0">,</span><span class="nu0">54h</span>
<span class="kw4">struc</span> EFI_TABLE_HEADER <span class="br0">&#123;</span>
 <span class="sy0">.</span>Signature    		int64
 <span class="sy0">.</span>Revision     		int32
 <span class="sy0">.</span>HeaderSize   		int32
 <span class="sy0">.</span>CRC32        		int32
 <span class="sy0">.</span>Reserved     		int32
<span class="br0">&#125;</span>
<span class="kw4">struct</span> EFI_TABLE_HEADER
&#160;
<span class="kw4">struc</span> EFI_SYSTEM_TABLE <span class="br0">&#123;</span>
 <span class="sy0">.</span>Hdr		        EFI_TABLE_HEADER
 <span class="sy0">.</span>FirmwareVendor        dptr
 <span class="sy0">.</span>FirmwareRevision      int32
 <span class="sy0">.</span>ConsoleInHandle       dptr
 <span class="sy0">.</span>ConIn 	        dptr
 <span class="sy0">.</span>ConsoleOutHandle      dptr
 <span class="sy0">.</span>ConOut	        dptr
 <span class="sy0">.</span>StandardErrorHandle   dptr
 <span class="sy0">.</span>StdErr	        dptr
 <span class="sy0">.</span>RuntimeServices       dptr
 <span class="sy0">.</span>BootServices	        dptr
 <span class="sy0">.</span>NumberOfTableEntries  intn
 <span class="sy0">.</span>ConfigurationTable    dptr
<span class="br0">&#125;</span>
<span class="kw4">struct</span> EFI_SYSTEM_TABLE
&#160;
<span class="kw4">struc</span> SIMPLE_TEXT_OUTPUT_INTERFACE <span class="br0">&#123;</span>
 <span class="sy0">.</span>Reset 	    	dptr
 <span class="sy0">.</span>OutputString	    	dptr
 <span class="sy0">.</span>TestString	    	dptr
 <span class="sy0">.</span>QueryMode	    	dptr
 <span class="sy0">.</span>SetMode	    	dptr
 <span class="sy0">.</span>SetAttribute	    	dptr
 <span class="sy0">.</span>ClearScreen	    	dptr
 <span class="sy0">.</span>SetCursorPosition 	dptr
 <span class="sy0">.</span>EnableCursor	    	dptr
 <span class="sy0">.</span>Mode		    	dptr
<span class="br0">&#125;</span>
<span class="kw4">struct</span> SIMPLE_TEXT_OUTPUT_INTERFACE
&#160;
<span class="co1">;---include ends</span>
&#160;
<span class="kw4">struc</span> SIMPLE_INPUT_INTERFACE <span class="br0">&#123;</span>
 <span class="sy0">.</span>Reset			dptr
 <span class="sy0">.</span>ReadKeyStroke		dptr
 <span class="sy0">.</span>WaitForKey		dptr
<span class="br0">&#125;</span>
<span class="kw4">struct</span> SIMPLE_INPUT_INTERFACE
&#160;
<span class="kw4">struc</span> EFI_BOOT_SERVICES_TABLE <span class="br0">&#123;</span>
 <span class="sy0">.</span>Hdr		       	EFI_TABLE_HEADER
 <span class="sy0">.</span>RaisePriority		dptr
 <span class="sy0">.</span>RestorePriority	dptr
 <span class="sy0">.</span>AllocatePages		dptr
 <span class="sy0">.</span>FreePages		dptr
 <span class="sy0">.</span>GetMemoryMap		dptr
 <span class="sy0">.</span>AllocatePool		dptr
 <span class="sy0">.</span>FreePool		dptr
 <span class="sy0">.</span>CreateEvent		dptr
 <span class="sy0">.</span>SetTimer		dptr
 <span class="sy0">.</span>WaitForEvent		dptr
 <span class="sy0">.</span>SignalEvent		dptr
 <span class="sy0">.</span>CloseEvent		dptr
 <span class="sy0">.</span>CheckEvent		dptr
 <span class="sy0">.</span>InstallProtocolInterface dptr
 <span class="sy0">.</span>ReInstallProtocolInterface dptr
 <span class="sy0">.</span>UnInstallProtocolInterface dptr
 <span class="sy0">.</span>HandleProtocol	dptr
 <span class="sy0">.</span>Void			dptr
 <span class="sy0">.</span>RegisterProtocolNotify dptr
 <span class="sy0">.</span>LocateHandle		dptr
 <span class="sy0">.</span>LocateDevicePath	dptr
 <span class="sy0">.</span>InstallConfigurationTable dptr
 <span class="sy0">.</span>ImageLoad		dptr
 <span class="sy0">.</span>ImageStart		dptr
 <span class="sy0">.</span><span class="kw4">Exit</span>			dptr
 <span class="sy0">.</span>ImageUnLoad		dptr
 <span class="sy0">.</span>ExitBootServices	dptr
 <span class="sy0">.</span>GetNextMonotonicCount	dptr
 <span class="sy0">.</span>Stall			dptr
 <span class="sy0">.</span>SetWatchdogTimer	dptr
 <span class="sy0">.</span>ConnectController	dptr
 <span class="sy0">.</span>DisConnectController	dptr
 <span class="sy0">.</span>OpenProtocol		dptr
 <span class="sy0">.</span>CloseProtocol		dptr
 <span class="sy0">.</span>OpenProtocolInformation dptr
 <span class="sy0">.</span>ProtocolsPerHandle	dptr
 <span class="sy0">.</span>LocateHandleBuffer	dptr
 <span class="sy0">.</span>LocateProtocol	dptr
 <span class="sy0">.</span>InstallMultipleProtocolInterfaces dptr
 <span class="sy0">.</span>UnInstallMultipleProtocolInterfaces dptr
 <span class="sy0">.</span>CalculateCrc32	dptr
 <span class="sy0">.</span>CopyMem		dptr
 <span class="sy0">.</span>SetMem		dptr
<span class="br0">&#125;</span>
<span class="kw4">struct</span> EFI_BOOT_SERVICES_TABLE
&#160;
<span class="kw4">struc</span> EFI_RUNTIME_SERVICES_TABLE <span class="br0">&#123;</span>
 <span class="sy0">.</span>Hdr		       	EFI_TABLE_HEADER
 <span class="sy0">.</span>GetTime		dptr
 <span class="sy0">.</span>SetTime		dptr
 <span class="sy0">.</span>GetWakeUpTime		dptr
 <span class="sy0">.</span>SetWakeUpTime		dptr
 <span class="sy0">.</span>SetVirtualAddressMap	dptr
 <span class="sy0">.</span>ConvertPointer	dptr
 <span class="sy0">.</span>GetVariable		dptr
 <span class="sy0">.</span>GetNextVariableName	dptr
 <span class="sy0">.</span>SetVariable		dptr
 <span class="sy0">.</span>GetNextHighMonoCount	dptr
 <span class="sy0">.</span>ResetSystem		dptr
<span class="br0">&#125;</span>
<span class="kw4">struct</span> EFI_RUNTIME_SERVICES_TABLE
&#160;
<span class="kw4">struc</span> EFI_TIME <span class="br0">&#123;</span>
 <span class="sy0">.</span>Year			int16
 <span class="sy0">.</span>Month			int8
 <span class="sy0">.</span>Day			int8
 <span class="sy0">.</span>Hour			int8
 <span class="sy0">.</span>Minute		int8
 <span class="sy0">.</span>Second		int8
 <span class="sy0">.</span>Pad1			int8
 <span class="sy0">.</span>Nanosecond		int32
 <span class="sy0">.</span>TimeZone		int16
 <span class="sy0">.</span>Daylight		int8
 <span class="sy0">.</span>Pad2			int8
 <span class="sy0">.</span><span class="kw4">sizeof</span>		rb <span class="nu0">1</span>
<span class="br0">&#125;</span>
<span class="kw4">struct</span> EFI_TIME
&#160;
EFI_LOADED_IMAGE_PROTOCOL_UUID equ <span class="nu0">0A1h</span><span class="sy0">,</span><span class="nu0">31h</span><span class="sy0">,</span><span class="nu0">1bh</span><span class="sy0">,</span><span class="nu0">5bh</span><span class="sy0">,</span><span class="nu0">62h</span><span class="sy0">,</span><span class="nu0">95h</span><span class="sy0">,</span><span class="nu0">0d2h</span><span class="sy0">,</span><span class="nu0">11h</span><span class="sy0">,</span><span class="nu0">8Eh</span><span class="sy0">,</span><span class="nu0">3Fh</span><span class="sy0">,</span><span class="nu0">0h</span><span class="sy0">,</span><span class="nu0">0A0h</span><span class="sy0">,</span><span class="nu0">0C9h</span><span class="sy0">,</span><span class="nu0">69h</span><span class="sy0">,</span><span class="nu0">72h</span><span class="sy0">,</span><span class="nu0">3Bh</span>
<span class="kw4">struc</span> EFI_LOADED_IMAGE_PROTOCOL <span class="br0">&#123;</span>
 <span class="sy0">.</span>Revision		int32
 <span class="sy0">.</span>ParentHandle		int64
 <span class="sy0">.</span>SystemTable		dptr
 <span class="sy0">.</span>DeviceHandle		int64
 <span class="sy0">.</span>FilePath		dptr
 <span class="sy0">.</span>Reserved		int64
 <span class="sy0">.</span>LoadOptionsSize	int32
 <span class="sy0">.</span>ImageBase		dptr
 <span class="sy0">.</span>ImageSize		int64
 <span class="sy0">.</span>ImageCodeType		int32
 <span class="sy0">.</span>ImageDataType		int32
 <span class="sy0">.</span>UnLoad		dptr
<span class="br0">&#125;</span>
<span class="kw4">struct</span> EFI_LOADED_IMAGE_PROTOCOL
&#160;
EFI_BLOCK_IO_PROTOCOL_UUID equ <span class="nu0">21h</span><span class="sy0">,</span><span class="nu0">5bh</span><span class="sy0">,</span><span class="nu0">4eh</span><span class="sy0">,</span><span class="nu0">96h</span><span class="sy0">,</span><span class="nu0">59h</span><span class="sy0">,</span><span class="nu0">64h</span><span class="sy0">,</span><span class="nu0">0d2h</span><span class="sy0">,</span><span class="nu0">11h</span><span class="sy0">,</span><span class="nu0">8eh</span><span class="sy0">,</span><span class="nu0">39h</span><span class="sy0">,</span><span class="nu0">00h</span><span class="sy0">,</span><span class="nu0">0a0h</span><span class="sy0">,</span><span class="nu0">0c9h</span><span class="sy0">,</span><span class="nu0">69h</span><span class="sy0">,</span><span class="nu0">72h</span><span class="sy0">,</span><span class="nu0">3bh</span>
<span class="kw4">struc</span> EFI_BLOCK_IO_PROTOCOL <span class="br0">&#123;</span>
 <span class="sy0">.</span>Revision		int64
 <span class="sy0">.</span>Media			dptr
 <span class="sy0">.</span>Reset			dptr
 <span class="sy0">.</span>ReadBlocks		dptr
 <span class="sy0">.</span>WriteBlocks		dptr
 <span class="sy0">.</span>FlushBlocks		dptr
<span class="br0">&#125;</span>
<span class="kw4">struct</span> EFI_BLOCK_IO_PROTOCOL
&#160;
<span class="kw4">struc</span> EFI_BLOCK_IO_MEDIA <span class="br0">&#123;</span>
 <span class="sy0">.</span>MediaId		int32
 <span class="sy0">.</span>RemovableMedia	int8
 <span class="sy0">.</span>MediaPresent		int8
 <span class="sy0">.</span>LogicalPartition	int8
 <span class="sy0">.</span><span class="kw5">ReadOnly</span>		int8
 <span class="sy0">.</span>WriteCaching		int8
 <span class="sy0">.</span>BlockSize		int32
 <span class="sy0">.</span>IoAlign		int32
 <span class="sy0">.</span>LastBlock		int64
<span class="br0">&#125;</span>
<span class="kw4">struct</span> EFI_BLOCK_IO_MEDIA
&#160;
EFI_GRAPHICS_OUTPUT_PROTOCOL_UUID equ <span class="nu0">0deh</span><span class="sy0">,</span> <span class="nu0">0a9h</span><span class="sy0">,</span> <span class="nu0">42h</span><span class="sy0">,</span><span class="nu0">90h</span><span class="sy0">,</span><span class="nu0">0dch</span><span class="sy0">,</span><span class="nu0">023h</span><span class="sy0">,</span><span class="nu0">38h</span><span class="sy0">,</span><span class="nu0">04ah</span><span class="sy0">,</span><span class="nu0">96h</span><span class="sy0">,</span><span class="nu0">0fbh</span><span class="sy0">,</span><span class="nu0">7ah</span><span class="sy0">,</span><span class="nu0">0deh</span><span class="sy0">,</span><span class="nu0">0d0h</span><span class="sy0">,</span><span class="nu0">80h</span><span class="sy0">,</span><span class="nu0">51h</span><span class="sy0">,</span><span class="nu0">6ah</span>
<span class="kw4">struc</span> EFI_GRAPHICS_OUTPUT_PROTOCOL <span class="br0">&#123;</span>
 <span class="sy0">.</span>QueryMode		dptr
 <span class="sy0">.</span>SetMode		dptr
 <span class="sy0">.</span>Blt			dptr
 <span class="sy0">.</span>Mode			dptr
<span class="br0">&#125;</span>
<span class="kw4">struct</span> EFI_GRAPHICS_OUTPUT_PROTOCOL
&#160;
<span class="kw4">struc</span> EFI_GRAPHICS_OUTPUT_PROTOCOL_MODE <span class="br0">&#123;</span>
 <span class="sy0">.</span>MaxMode		int32
 <span class="sy0">.</span>CurrentMode		int32
 <span class="sy0">.</span>ModeInfo		dptr
 <span class="sy0">.</span>SizeOfModeInfo	intn
 <span class="sy0">.</span>FrameBufferBase	dptr
 <span class="sy0">.</span>FrameBufferSize	intn
<span class="br0">&#125;</span>
<span class="kw4">struct</span> EFI_GRAPHICS_OUTPUT_PROTOCOL_MODE
&#160;
<span class="kw4">struc</span> EFI_GRAPHICS_OUTPUT_MODE_INFORMATION <span class="br0">&#123;</span>
 <span class="sy0">.</span>Version		int32
 <span class="sy0">.</span>HorizontalResolution	int32
 <span class="sy0">.</span>VerticalResolution	int32
 <span class="sy0">.</span>PixelFormat		int32
 <span class="sy0">.</span>RedMask		int32
 <span class="sy0">.</span>GreenMask		int32
 <span class="sy0">.</span>BlueMask		int32
 <span class="sy0">.</span>Reserved		int32
 <span class="sy0">.</span>PixelsPerScanline	int32
<span class="br0">&#125;</span>
<span class="kw4">struct</span> EFI_GRAPHICS_OUTPUT_MODE_INFORMATION
<span class="co1">;---macros to make life easier---</span>
<span class="co1">;call it early, after entry point is the best</span>
<span class="kw4">macro</span> InitializeLib
<span class="br0">&#123;</span>
		<span class="kw1">clc</span>
		<span class="kw1">or</span>			<span class="kw3">rdx</span><span class="sy0">,</span> <span class="kw3">rdx</span>
		<span class="kw1">jz</span>			<span class="sy0">.</span>badout
		<span class="kw1">cmp</span>			<span class="kw5">dword</span> <span class="br0">&#91;</span><span class="kw3">rdx</span><span class="br0">&#93;</span><span class="sy0">,</span> <span class="nu0">20494249h</span>
		<span class="kw1">je</span>			<span class="kw5">@f</span>
<span class="sy0">.</span>badout<span class="sy0">:</span>	  <span class="kw1">xor</span>			<span class="kw3">rcx</span><span class="sy0">,</span> <span class="kw3">rcx</span>
		<span class="kw1">xor</span>			<span class="kw3">rdx</span><span class="sy0">,</span> <span class="kw3">rdx</span>
		<span class="kw1">stc</span>
@@<span class="sy0">:</span>		<span class="kw1">mov</span>			<span class="br0">&#91;</span>efi_handler<span class="br0">&#93;</span><span class="sy0">,</span> <span class="kw3">rcx</span>		<span class="co1">; ImageHandle</span>
		<span class="kw1">mov</span>			<span class="br0">&#91;</span>efi_ptr<span class="br0">&#93;</span><span class="sy0">,</span> <span class="kw3">rdx</span>    		<span class="co1">; pointer to SystemTable</span>
<span class="br0">&#125;</span>
&#160;
<span class="co1">;invoke an UEFI function</span>
<span class="kw4">macro</span> uefi_call_wrapper			interface<span class="sy0">,</span>function<span class="sy0">,</span>arg1<span class="sy0">,</span>arg2<span class="sy0">,</span>arg3<span class="sy0">,</span>arg4<span class="sy0">,</span>arg5<span class="sy0">,</span>arg6<span class="sy0">,</span>arg7<span class="sy0">,</span>arg8<span class="sy0">,</span>arg9<span class="sy0">,</span>arg10<span class="sy0">,</span>arg11
<span class="br0">&#123;</span>
numarg = <span class="nu0">0</span>
<span class="kw4">if</span> ~ arg11 <span class="kw4">eq</span>
 numarg = numarg <span class="sy0">+</span> <span class="nu0">1</span>
 <span class="kw4">if</span> ~ arg11 <span class="kw4">eq</span> <span class="kw3">rdi</span>
		<span class="kw1">mov</span>			<span class="kw3">rdi</span><span class="sy0">,</span> arg11
 <span class="kw4">end</span> <span class="kw4">if</span>
<span class="kw4">end</span> <span class="kw4">if</span>
<span class="kw4">if</span> ~ arg10 <span class="kw4">eq</span>
 numarg = numarg <span class="sy0">+</span> <span class="nu0">1</span>
 <span class="kw4">if</span> ~ arg10 <span class="kw4">eq</span> <span class="kw3">rsi</span>
		<span class="kw1">mov</span>			<span class="kw3">rsi</span><span class="sy0">,</span> arg10
 <span class="kw4">end</span> <span class="kw4">if</span>
<span class="kw4">end</span> <span class="kw4">if</span>
<span class="kw4">if</span> ~ arg9 <span class="kw4">eq</span>
 numarg = numarg <span class="sy0">+</span> <span class="nu0">1</span>
 <span class="kw4">if</span> ~ arg9 <span class="kw4">eq</span> <span class="kw3">r14</span>
		<span class="kw1">mov</span>			<span class="kw3">r14</span><span class="sy0">,</span> arg9
 <span class="kw4">end</span> <span class="kw4">if</span>
<span class="kw4">end</span> <span class="kw4">if</span>
<span class="kw4">if</span> ~ arg8 <span class="kw4">eq</span>
 numarg = numarg <span class="sy0">+</span> <span class="nu0">1</span>
 <span class="kw4">if</span> ~ arg8 <span class="kw4">eq</span> <span class="kw3">r13</span>
		<span class="kw1">mov</span>			<span class="kw3">r13</span><span class="sy0">,</span> arg8
 <span class="kw4">end</span> <span class="kw4">if</span>
<span class="kw4">end</span> <span class="kw4">if</span>
<span class="kw4">if</span> ~ arg7 <span class="kw4">eq</span>
 numarg = numarg <span class="sy0">+</span> <span class="nu0">1</span>
 <span class="kw4">if</span> ~ arg7 <span class="kw4">eq</span> <span class="kw3">r12</span>
		<span class="kw1">mov</span>			<span class="kw3">r12</span><span class="sy0">,</span> arg7
 <span class="kw4">end</span> <span class="kw4">if</span>
<span class="kw4">end</span> <span class="kw4">if</span>
<span class="kw4">if</span> ~ arg6 <span class="kw4">eq</span>
 numarg = numarg <span class="sy0">+</span> <span class="nu0">1</span>
 <span class="kw4">if</span> ~ arg6 <span class="kw4">eq</span> <span class="kw3">r11</span>
		<span class="kw1">mov</span>			<span class="kw3">r11</span><span class="sy0">,</span> arg6
 <span class="kw4">end</span> <span class="kw4">if</span>
<span class="kw4">end</span> <span class="kw4">if</span>
<span class="kw4">if</span> ~ arg5 <span class="kw4">eq</span>
 numarg = numarg <span class="sy0">+</span> <span class="nu0">1</span>
 <span class="kw4">if</span> ~ arg5 <span class="kw4">eq</span> <span class="kw3">r10</span>
		<span class="kw1">mov</span>			<span class="kw3">r10</span><span class="sy0">,</span> arg5
 <span class="kw4">end</span> <span class="kw4">if</span>
<span class="kw4">end</span> <span class="kw4">if</span>
<span class="kw4">if</span> ~ arg4 <span class="kw4">eq</span>
 numarg = numarg <span class="sy0">+</span> <span class="nu0">1</span>
 <span class="kw4">if</span> ~ arg4 <span class="kw4">eq</span> <span class="kw3">r9</span>
		<span class="kw1">mov</span>			<span class="kw3">r9</span><span class="sy0">,</span> arg4
 <span class="kw4">end</span> <span class="kw4">if</span>
<span class="kw4">end</span> <span class="kw4">if</span>
<span class="kw4">if</span> ~ arg3 <span class="kw4">eq</span>
 numarg = numarg <span class="sy0">+</span> <span class="nu0">1</span>
 <span class="kw4">if</span> ~ arg3 <span class="kw4">eq</span> <span class="kw3">r8</span>
		<span class="kw1">mov</span>			<span class="kw3">r8</span><span class="sy0">,</span> arg3
 <span class="kw4">end</span> <span class="kw4">if</span>
<span class="kw4">end</span> <span class="kw4">if</span>
<span class="kw4">if</span> ~ arg2 <span class="kw4">eq</span>
 numarg = numarg <span class="sy0">+</span> <span class="nu0">1</span>
 <span class="kw4">if</span> ~ arg2 <span class="kw4">eq</span> <span class="kw3">rdx</span>
		<span class="kw1">mov</span>			<span class="kw3">rdx</span><span class="sy0">,</span> arg2
 <span class="kw4">end</span> <span class="kw4">if</span>
<span class="kw4">end</span> <span class="kw4">if</span>
<span class="kw4">if</span> ~ arg1 <span class="kw4">eq</span>
 numarg = numarg <span class="sy0">+</span> <span class="nu0">1</span>
 <span class="kw4">if</span> ~ arg1 <span class="kw4">eq</span> <span class="kw3">rcx</span>
  <span class="kw4">if</span> ~ arg1 <span class="kw1">in</span> &lt;ConsoleInHandle<span class="sy0">,</span>ConIn<span class="sy0">,</span>ConsoleOutHandle<span class="sy0">,</span>ConOut<span class="sy0">,</span>StandardErrorHandle<span class="sy0">,</span>StdErr<span class="sy0">,</span>RuntimeServices<span class="sy0">,</span>BootServices&gt;
		<span class="kw1">mov</span>			<span class="kw3">rcx</span><span class="sy0">,</span> arg1
  <span class="kw4">end</span> <span class="kw4">if</span>
 <span class="kw4">end</span> <span class="kw4">if</span>
<span class="kw4">end</span> <span class="kw4">if</span>
		<span class="kw1">xor</span>			<span class="kw3">rax</span><span class="sy0">,</span> <span class="kw3">rax</span>
		<span class="kw1">mov</span>			<span class="kw3">al</span><span class="sy0">,</span> numarg
<span class="kw4">if</span> interface <span class="kw1">in</span> &lt;ConsoleInHandle<span class="sy0">,</span>ConIn<span class="sy0">,</span>ConsoleOutHandle<span class="sy0">,</span>ConOut<span class="sy0">,</span>StandardErrorHandle<span class="sy0">,</span>StdErr<span class="sy0">,</span>RuntimeServices<span class="sy0">,</span>BootServices&gt;
		<span class="kw1">mov</span>			<span class="kw3">rbx</span><span class="sy0">,</span> <span class="br0">&#91;</span>efi_ptr<span class="br0">&#93;</span>
		<span class="kw1">mov</span>			<span class="kw3">rbx</span><span class="sy0">,</span> <span class="br0">&#91;</span><span class="kw3">rbx</span> <span class="sy0">+</span> EFI_SYSTEM_TABLE<span class="sy0">.</span>#interface<span class="br0">&#93;</span>
<span class="kw4">else</span>
 <span class="kw4">if</span> ~ interface <span class="kw4">eq</span> <span class="kw3">rbx</span>
		<span class="kw1">mov</span>			<span class="kw3">rbx</span><span class="sy0">,</span> interface
 <span class="kw4">end</span> <span class="kw4">if</span>
<span class="kw4">end</span> <span class="kw4">if</span>
<span class="kw4">if</span> arg1 <span class="kw1">in</span> &lt;ConsoleInHandle<span class="sy0">,</span>ConIn<span class="sy0">,</span>ConsoleOutHandle<span class="sy0">,</span>ConOut<span class="sy0">,</span>StandardErrorHandle<span class="sy0">,</span>StdErr<span class="sy0">,</span>RuntimeServices<span class="sy0">,</span>BootServices&gt;
		<span class="kw1">mov</span>			<span class="kw3">rcx</span><span class="sy0">,</span> <span class="kw3">rbx</span>
<span class="kw4">end</span> <span class="kw4">if</span>
<span class="kw4">if</span> defined SIMPLE_INPUT_INTERFACE<span class="sy0">.</span>#function
		<span class="kw1">mov</span>			<span class="kw3">rbx</span><span class="sy0">,</span> <span class="br0">&#91;</span><span class="kw3">rbx</span> <span class="sy0">+</span> SIMPLE_INPUT_INTERFACE<span class="sy0">.</span>#function<span class="br0">&#93;</span>
<span class="kw4">else</span>
 <span class="kw4">if</span> defined SIMPLE_TEXT_OUTPUT_INTERFACE<span class="sy0">.</span>#function
		<span class="kw1">mov</span>			<span class="kw3">rbx</span><span class="sy0">,</span> <span class="br0">&#91;</span><span class="kw3">rbx</span> <span class="sy0">+</span> SIMPLE_TEXT_OUTPUT_INTERFACE<span class="sy0">.</span>#function<span class="br0">&#93;</span>
 <span class="kw4">else</span>
  <span class="kw4">if</span> defined EFI_BOOT_SERVICES_TABLE<span class="sy0">.</span>#function
		<span class="kw1">mov</span>			<span class="kw3">rbx</span><span class="sy0">,</span> <span class="br0">&#91;</span><span class="kw3">rbx</span> <span class="sy0">+</span> EFI_BOOT_SERVICES_TABLE<span class="sy0">.</span>#function<span class="br0">&#93;</span>
  <span class="kw4">else</span>
   <span class="kw4">if</span> defined EFI_RUNTIME_SERVICES_TABLE<span class="sy0">.</span>#function
		<span class="kw1">mov</span>			<span class="kw3">rbx</span><span class="sy0">,</span> <span class="br0">&#91;</span><span class="kw3">rbx</span> <span class="sy0">+</span> EFI_RUNTIME_SERVICES_TABLE<span class="sy0">.</span>#function<span class="br0">&#93;</span>
   <span class="kw4">else</span>
    <span class="kw4">if</span> defined EFI_GRAPHICS_OUTPUT_PROTOCOL<span class="sy0">.</span>#function
		<span class="kw1">mov</span>			<span class="kw3">rbx</span><span class="sy0">,</span> <span class="br0">&#91;</span><span class="kw3">rbx</span> <span class="sy0">+</span> EFI_GRAPHICS_OUTPUT_PROTOCOL<span class="sy0">.</span>#function<span class="br0">&#93;</span>
    <span class="kw4">else</span>
     <span class="kw4">if</span> defined EFI_GRAPHICS_OUTPUT_PROTOCOL_MODE<span class="sy0">.</span>#function
		<span class="kw1">mov</span>			<span class="kw3">rbx</span><span class="sy0">,</span> <span class="br0">&#91;</span><span class="kw3">rbx</span> <span class="sy0">+</span> EFI_GRAPHICS_OUTPUT_PROTOCOL_MODE<span class="sy0">.</span>#function<span class="br0">&#93;</span>
     <span class="kw4">else</span>
		<span class="kw1">mov</span>			<span class="kw3">rbx</span><span class="sy0">,</span> <span class="br0">&#91;</span><span class="kw3">rbx</span> <span class="sy0">+</span> function<span class="br0">&#93;</span>
     <span class="kw4">end</span> <span class="kw4">if</span>
    <span class="kw4">end</span> <span class="kw4">if</span>
   <span class="kw4">end</span> <span class="kw4">if</span>
  <span class="kw4">end</span> <span class="kw4">if</span>
 <span class="kw4">end</span> <span class="kw4">if</span>
<span class="kw4">end</span> <span class="kw4">if</span>
		<span class="kw1">call</span>			uefifunc
<span class="br0">&#125;</span>
&#160;
<span class="co1">;*********************************************************************</span>
<span class="co1">;*                       Library functions                           *</span>
<span class="co1">;*********************************************************************</span>
&#160;
section <span class="st0">'.text'</span> <span class="kw4">code</span> executable readable
&#160;
uefifunc<span class="sy0">:</span>	<span class="co1">;save stack pointer</span>
		<span class="kw1">mov</span>			<span class="kw5">qword</span> <span class="br0">&#91;</span>uefi_rsptmp<span class="br0">&#93;</span><span class="sy0">,</span> <span class="kw3">rsp</span>
		<span class="co1">;set up new aligned stack</span>
		<span class="kw1">and</span>			<span class="kw3">esp</span><span class="sy0">,</span> <span class="nu0">0FFFFFFF0h</span>
		<span class="co1">;alignment check on arguments</span>
		<span class="kw1">bt</span>			<span class="kw3">eax</span><span class="sy0">,</span> <span class="nu0">0</span>
		<span class="kw1">jnc</span>			<span class="kw5">@f</span>
		<span class="kw1">push</span>			<span class="kw3">rax</span>
		<span class="co1">;arguments</span>
@@<span class="sy0">:</span>		<span class="kw1">cmp</span>			<span class="kw3">al</span><span class="sy0">,</span> <span class="nu0">11</span>
		<span class="kw1">jb</span>			<span class="kw5">@f</span>
		<span class="kw1">push</span>			<span class="kw3">rdi</span>
@@<span class="sy0">:</span>		<span class="kw1">cmp</span>			<span class="kw3">al</span><span class="sy0">,</span> <span class="nu0">10</span>
		<span class="kw1">jb</span>			<span class="kw5">@f</span>
		<span class="kw1">push</span>			<span class="kw3">rsi</span>
@@<span class="sy0">:</span>		<span class="kw1">cmp</span>			<span class="kw3">al</span><span class="sy0">,</span> <span class="nu0">9</span>
		<span class="kw1">jb</span>			<span class="kw5">@f</span>
		<span class="kw1">push</span>			<span class="kw3">r14</span>
@@<span class="sy0">:</span>		<span class="kw1">cmp</span>			<span class="kw3">al</span><span class="sy0">,</span> <span class="nu0">8</span>
		<span class="kw1">jb</span>			<span class="kw5">@f</span>
		<span class="kw1">push</span>			<span class="kw3">r13</span>
@@<span class="sy0">:</span>		<span class="kw1">cmp</span>			<span class="kw3">al</span><span class="sy0">,</span> <span class="nu0">7</span>
		<span class="kw1">jb</span>			<span class="kw5">@f</span>
		<span class="kw1">push</span>			<span class="kw3">r12</span>
@@<span class="sy0">:</span>		<span class="kw1">cmp</span>			<span class="kw3">al</span><span class="sy0">,</span> <span class="nu0">6</span>
		<span class="kw1">jb</span>			<span class="kw5">@f</span>
		<span class="kw1">push</span>			<span class="kw3">r11</span>
@@<span class="sy0">:</span>		<span class="kw1">cmp</span>			<span class="kw3">al</span><span class="sy0">,</span> <span class="nu0">5</span>
		<span class="kw1">jb</span>			<span class="kw5">@f</span>
		<span class="kw1">push</span>			<span class="kw3">r10</span>
@@<span class="sy0">:</span>		<span class="co1">;space for</span>
		<span class="co1">;r9</span>
		<span class="co1">;r8</span>
		<span class="co1">;rdx</span>
		<span class="co1">;rcx</span>
		<span class="kw1">sub</span>			<span class="kw3">rsp</span><span class="sy0">,</span> <span class="nu0">4</span><span class="sy0">*</span><span class="nu0">8</span>
		<span class="co1">;call function</span>
		<span class="kw1">call</span>			<span class="kw3">rbx</span>
		<span class="co1">;restore old stack</span>
		<span class="kw1">mov</span>			<span class="kw3">rsp</span><span class="sy0">,</span> <span class="kw5">qword</span> <span class="br0">&#91;</span>uefi_rsptmp<span class="br0">&#93;</span>
		<span class="kw1">ret</span>
&#160;
section <span class="st0">'.data'</span> <span class="kw4">data</span> readable writeable
efi_handler<span class="sy0">:</span>	<span class="kw4">dq</span>			<span class="nu0">0</span>
efi_ptr<span class="sy0">:</span>	<span class="kw4">dq</span>			<span class="nu0">0</span>
uefi_rsptmp<span class="sy0">:</span>	<span class="kw4">dq</span>			<span class="nu0">0</span></pre></div></div>

<!-- 
NewPP limit report
Preprocessor node count: 112/1000000
Post-expand include size: 376/2097152 bytes
Template argument size: 0/2097152 bytes
Expensive parser function count: 0/100
-->

<!-- Saved in parser cache with key wikidb:pcache:idhash:3317-0!*!0!!en!*!* and timestamp 20180121033915 -->
</div>				<!-- /bodycontent -->
								<!-- printfooter -->
				<div class="printfooter">
				Retrieved from "<a href="http://wiki.osdev.org/index.php?title=Uefi.inc&amp;oldid=21077">http://wiki.osdev.org/index.php?title=Uefi.inc&amp;oldid=21077</a>"				</div>
				<!-- /printfooter -->
												<!-- catlinks -->
				<div id='catlinks' class='catlinks'><div id="mw-normal-catlinks"><a href="http://wiki.osdev.org/Special:Categories" title="Special:Categories">Categories</a>: <ul><li><a href="Category:Lovecraftian" title="Category:Lovecraftian">Lovecraftian</a></li><li><a href="Category:UEFI" title="Category:UEFI">UEFI</a></li><li><a href="Category:X86" title="Category:X86">X86</a></li></ul></div></div>				<!-- /catlinks -->
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
		<li id="pt-login"><a href="http://wiki.osdev.org/index.php?title=Special:UserLogin&amp;returnto=Uefi.inc" title="You are encouraged to log in; however, it is not mandatory [o]" accesskey="o">Log in</a></li>
	</ul>
</div>

<!-- /0 -->
			<div id="left-navigation">
				
<!-- 0 -->
<div id="p-namespaces" class="vectorTabs">
	<h5>Namespaces</h5>
	<ul>
					<li  id="ca-nstab-main" class="selected"><span><a href="Uefi.inc"  title="View the content page [c]" accesskey="c">Page</a></span></li>
					<li  id="ca-talk" class="new"><span><a href="http://wiki.osdev.org/index.php?title=Talk:Uefi.inc&amp;action=edit&amp;redlink=1"  title="Discussion about the content page [t]" accesskey="t">Discussion</a></span></li>
			</ul>
</div>

<!-- /0 -->

<!-- 1 -->
<div id="p-variants" class="vectorMenu emptyPortlet">
		<h5><span>Variants</span><a href="Uefi.inc#"></a></h5>
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
					<li id="ca-view" class="selected"><span><a href="Uefi.inc" >Read</a></span></li>
					<li id="ca-viewsource"><span><a href="http://wiki.osdev.org/index.php?title=Uefi.inc&amp;action=edit"  title="This page is protected.&#10;You can view its source [e]" accesskey="e">View source</a></span></li>
					<li id="ca-history" class="collapsible"><span><a href="http://wiki.osdev.org/index.php?title=Uefi.inc&amp;action=history"  title="Past revisions of this page [h]" accesskey="h">View history</a></span></li>
			</ul>
</div>

<!-- /0 -->

<!-- 1 -->
<div id="p-cactions" class="vectorMenu emptyPortlet">
	<h5><span>Actions</span><a href="Uefi.inc#"></a></h5>
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
			<li id="n-Joining"><a href="/OSDevWiki:Joining">Joining</a></li>
			<li id="n-Editing-help"><a href="/OSDevWiki:Editing">Editing help</a></li>
			<li id="n-recentchanges"><a href="/Special:RecentChanges" title="A list of recent changes in the wiki [r]" accesskey="r">Recent changes</a></li>
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
			<li id="t-whatlinkshere"><a href="/Special:WhatLinksHere/Uefi.inc" title="A list of all wiki pages that link here [j]" accesskey="j">What links here</a></li>
			<li id="t-recentchangeslinked"><a href="/Special:RecentChangesLinked/Uefi.inc" title="Recent changes in pages linked from this page [k]" accesskey="k">Related changes</a></li>
			<li id="t-specialpages"><a href="/Special:SpecialPages" title="A list of all special pages [q]" accesskey="q">Special pages</a></li>
			<li><a href="/index.php?title=Uefi.inc&amp;printable=yes" rel="alternate">Printable version</a></li>
			<li id="t-permalink"><a href="/index.php?title=Uefi.inc&amp;oldid=21077" title="Permanent link to this revision of the page">Permanent link</a></li>
		</ul>
	</div>
</div>

<!-- /TOOLBOX -->

<!-- LANGUAGES -->

<!-- /LANGUAGES -->
			</div>
		<!-- /panel -->
		<!-- footer -->
		<div id="footer">
	skins/common/images/osdev.png);" href="/Main_Page"  title="Visit the main page"></a></div>
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
			<li id="t-whatlinkshere"><a href="http://wiki.osdev.org/Special:WhatLinksHere/Uefi.inc" title="A list of all wiki pages that link here [j]" accesskey="j">What links here</a></li>
			<li id="t-recentchangeslinked"><a href="http://wiki.osdev.org/Special:RecentChangesLinked/Uefi.inc" title="Recent changes in pages linked from this page [k]" accesskey="k">Related changes</a></li>
			<li id="t-specialpages"><a href="http://wiki.osdev.org/Special:SpecialPages" title="A list of all special pages [q]" accesskey="q">Special pages</a></li>
			<li><a href="http://wiki.osdev.org/index.php?title=Uefi.inc&amp;printable=yes" rel="alternate">Printable version</a></li>
			<li id="t-permalink"><a href="http://wiki.osdev.org/index.php?title=Uefi.inc&amp;oldid=21077" title="Permanent link to this revision of the page">Permanent link</a></li>
		</ul>
	</div>
</div>

<!-- /TOOLBOX -->

<!-- LANGUAGES -->

<!-- /LANGUAGES -->
			</div>
		<!-- /panel -->
		<!-- footer -->
		<div id="footer">
							<ul id="footer-info">
											<li id="footer-info-lastmod"> This page was last modified on 10 August 2017, at 14:16.</li>
											<li id="footer-info-viewcount">This page has been accessed 17,724 times.</li>
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
</script><!-- Served in 0.031 secs. -->
	</body>
</html>
