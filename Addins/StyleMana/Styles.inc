
.const

styledefdlg		dd DS_3DLOOK
				dd DS_3DLOOK
				db 'DS_3DLOOK',0
				dd DS_ABSALIGN
				dd DS_ABSALIGN
				db 'DS_ABSALIGN',0
				dd DS_CENTER
				dd DS_CENTER
				db 'DS_CENTER',0
				dd DS_CENTERMOUSE
				dd DS_CENTERMOUSE
				db 'DS_CENTERMOUSE',0
				dd DS_CONTEXTHELP
				dd DS_CONTEXTHELP
				db 'DS_CONTEXTHELP',0
				dd DS_CONTROL
				dd DS_CONTROL
				db 'DS_CONTROL',0
				dd DS_FIXEDSYS
				dd DS_FIXEDSYS
				db 'DS_FIXEDSYS',0
				dd DS_LOCALEDIT
				dd DS_LOCALEDIT
				db 'DS_LOCALEDIT',0
				dd DS_MODALFRAME
				dd DS_MODALFRAME
				db 'DS_MODALFRAME',0
				dd DS_NOFAILCREATE
				dd DS_NOFAILCREATE
				db 'DS_NOFAILCREATE',0
				dd DS_NOIDLEMSG
				dd DS_NOIDLEMSG
				db 'DS_NOIDLEMSG',0
				dd DS_SETFONT
				dd DS_SETFONT
				db 'DS_SETFONT',0
				dd DS_SETFOREGROUND
				dd DS_SETFOREGROUND
				db 'DS_SETFOREGROUND',0
				dd DS_SYSMODAL
				dd DS_SYSMODAL
				db 'DS_SYSMODAL',0
				dd WS_BORDER
				dd WS_CAPTION
				db 'WS_BORDER',0
				dd WS_CAPTION
				dd WS_CAPTION
				db 'WS_CAPTION',0
				dd WS_CHILD
				dd WS_POPUP or WS_CHILD
				db 'WS_CHILD',0
;				dd WS_CHILDWINDOW
;				dd WS_POPUP or WS_CHILD
;				db 'WS_CHILDWINDOW',0
				dd WS_CLIPCHILDREN
				dd WS_CLIPCHILDREN
				db 'WS_CLIPCHILDREN',0
				dd WS_CLIPSIBLINGS
				dd WS_CLIPSIBLINGS
				db 'WS_CLIPSIBLINGS',0
				dd WS_DISABLED
				dd WS_DISABLED
				db 'WS_DISABLED',0
				dd WS_DLGFRAME
				dd WS_CAPTION
				db 'WS_DLGFRAME',0
				dd WS_GROUP
				dd WS_GROUP
				db 'WS_GROUP',0
				dd WS_HSCROLL
				dd WS_HSCROLL
				db 'WS_HSCROLL',0
				dd WS_ICONIC
				dd WS_ICONIC
				db 'WS_ICONIC',0
				dd WS_MAXIMIZE
				dd WS_MAXIMIZE
				db 'WS_MAXIMIZE',0
				dd WS_MINIMIZE
				dd WS_MINIMIZE
				db 'WS_MINIMIZE',0
;				dd WS_OVERLAPPED
;				dd WS_OVERLAPPED
;				db 'WS_OVERLAPPED',0
				dd WS_OVERLAPPEDWINDOW
				dd WS_OVERLAPPEDWINDOW
				db 'WS_OVERLAPPEDWINDOW',0
				dd WS_POPUP
				dd WS_POPUP or WS_CHILD
				db 'WS_POPUP',0
;				dd WS_POPUPWINDOW
;				dd WS_POPUP or WS_CHILD
;				db 'WS_POPUPWINDOW',0
				dd WS_SIZEBOX
				dd WS_SIZEBOX
				db 'WS_SIZEBOX',0
				dd WS_SYSMENU
				dd WS_SYSMENU
				db 'WS_SYSMENU',0
				dd WS_TABSTOP
				dd WS_TABSTOP
				db 'WS_TABSTOP',0
				dd WS_THICKFRAME
				dd WS_THICKFRAME
				db 'WS_THICKFRAME',0
;				dd WS_TILED
;				dd WS_TILED
;				db 'WS_TILED',0
;				dd WS_TILEDWINDOW
;				dd WS_TILEDWINDOW
;				db 'WS_TILEDWINDOW',0
				dd WS_VISIBLE
				dd WS_VISIBLE
				db 'WS_VISIBLE',0
				dd WS_VSCROLL
				dd WS_VSCROLL
				db 'WS_VSCROLL',0
				dd 0,0
				db 0


styledef		dd ACS_CENTER
				dd ACS_CENTER
				db 'ACS_CENTER',0
				dd ACS_TRANSPARENT
				dd ACS_TRANSPARENT
				db 'ACS_TRANSPARENT',0
				dd ACS_AUTOPLAY
				dd ACS_AUTOPLAY
				db 'ACS_AUTOPLAY',0
				dd ACS_TIMER
				dd ACS_TIMER
				db 'ACS_TIMER',0
				dd BS_3STATE
				dd 0FFh
				db 'BS_3STATE',0
				dd BS_AUTO3STATE
				dd 0FFh
				db 'BS_AUTO3STATE',0
				dd BS_AUTOCHECKBOX
				dd 0FFh
				db 'BS_AUTOCHECKBOX',0
				dd BS_AUTORADIOBUTTON
				dd 0FFh
				db 'BS_AUTORADIOBUTTON',0
				dd BS_BITMAP
				dd 0FFh
				db 'BS_BITMAP',0
				dd BS_BOTTOM
				dd 0C00h
				db 'BS_BOTTOM',0
				dd BS_CENTER
				dd 300h
				db 'BS_CENTER',0
				dd BS_CHECKBOX
				dd 0FFh
				db 'BS_CHECKBOX',0
				dd BS_COMMANDLINK
				dd 0EFh
				db 'BS_COMMANDLINK',0
				dd BS_DEFCOMMANDLINK
				dd 0EFh
				db 'BS_DEFCOMMANDLINK',0
				dd BS_DEFPUSHBUTTON
				dd 0FFh
				db 'BS_DEFPUSHBUTTON',0
				dd BS_DEFSPLITBUTTON
				dd 0EFh
				db 'BS_DEFSPLITBUTTON',0
				dd BS_FLAT
				dd BS_FLAT
				db 'BS_FLAT',0
				dd BS_GROUPBOX
				dd 0FFh
				db 'BS_GROUPBOX',0
				dd BS_ICON
				dd 0FFh
				db 'BS_ICON',0
				dd BS_LEFT
				dd 0300h
				db 'BS_LEFT',0
				dd BS_LEFTTEXT
				dd BS_LEFTTEXT
				db 'BS_LEFTTEXT',0
				dd BS_MULTILINE
				dd BS_MULTILINE
				db 'BS_MULTILINE',0
				dd BS_NOTIFY
				dd BS_NOTIFY
				db 'BS_NOTIFY',0
				dd BS_OWNERDRAW
				dd 0FFh
				db 'BS_OWNERDRAW',0
				dd BS_PUSHBUTTON
				dd 0FFh
				db 'BS_PUSHBUTTON',0
				dd BS_PUSHLIKE
				dd BS_PUSHLIKE
				db 'BS_PUSHLIKE',0
				dd BS_RADIOBUTTON
				dd 0FFh
				db 'BS_RADIOBUTTON',0
				dd BS_RIGHT
				dd 0300h
				db 'BS_RIGHT',0
				dd BS_RIGHTBUTTON
				dd BS_RIGHTBUTTON
				db 'BS_RIGHTBUTTON',0
				dd BS_SPLITBUTTON
				dd 0EFh
				db 'BS_SPLITBUTTON',0
				dd BS_TEXT
				dd BS_TEXT
				db 'BS_TEXT',0
				dd BS_TOP
				dd 0C00h
				db 'BS_TOP',0
				dd BS_USERBUTTON
				dd 0FFh
				db 'BS_USERBUTTON',0
				dd BS_VCENTER
				dd 0C00h
				db 'BS_VCENTER',0
				dd CBS_AUTOHSCROLL
				dd CBS_AUTOHSCROLL
				db 'CBS_AUTOHSCROLL',0
				dd CBS_DISABLENOSCROLL
				dd CBS_DISABLENOSCROLL
				db 'CBS_DISABLENOSCROLL',0
				dd CBS_DROPDOWN
				dd 3
				db 'CBS_DROPDOWN',0
				dd CBS_DROPDOWNLIST
				dd 3
				db 'CBS_DROPDOWNLIST',0
				dd CBS_HASSTRINGS
				dd CBS_HASSTRINGS
				db 'CBS_HASSTRINGS',0
				dd CBS_LOWERCASE
				dd CBS_LOWERCASE
				db 'CBS_LOWERCASE',0
				dd CBS_NOINTEGRALHEIGHT
				dd CBS_NOINTEGRALHEIGHT
				db 'CBS_NOINTEGRALHEIGHT',0
				dd CBS_OEMCONVERT
				dd CBS_OEMCONVERT
				db 'CBS_OEMCONVERT',0
				dd CBS_OWNERDRAWFIXED
				dd CBS_OWNERDRAWFIXED
				db 'CBS_OWNERDRAWFIXED',0
				dd CBS_OWNERDRAWVARIABLE
				dd CBS_OWNERDRAWVARIABLE
				db 'CBS_OWNERDRAWVARIABLE',0
				dd CBS_SIMPLE
				dd 3
				db 'CBS_SIMPLE',0
				dd CBS_SORT
				dd CBS_SORT
				db 'CBS_SORT',0
				dd CBS_UPPERCASE
				dd CBS_UPPERCASE
				db 'CBS_UPPERCASE',0
				dd CCS_TOP
				dd 83h
				db 'CCS_TOP',0
				dd CCS_NOMOVEY
				dd 83h
				db 'CCS_NOMOVEY',0
				dd CCS_BOTTOM
				dd 83h
				db 'CCS_BOTTOM',0
				dd CCS_NORESIZE
				dd CCS_NORESIZE
				db 'CCS_NORESIZE',0
				dd CCS_NOPARENTALIGN
				dd CCS_NOPARENTALIGN
				db 'CCS_NOPARENTALIGN',0
				dd CCS_ADJUSTABLE
				dd CCS_ADJUSTABLE
				db 'CCS_ADJUSTABLE',0
				dd CCS_NODIVIDER
				dd CCS_NODIVIDER
				db 'CCS_NODIVIDER',0
				dd CCS_VERT
				dd CCS_VERT
				db 'CCS_VERT',0
				dd CCS_LEFT
				dd 83h
				db 'CCS_LEFT',0
				dd CCS_RIGHT
				dd 83h
				db 'CCS_RIGHT',0
				dd CCS_NOMOVEX
				dd 83h
				db 'CCS_NOMOVEX',0
				dd DTS_UPDOWN
				dd DTS_UPDOWN
				db 'DTS_UPDOWN',0
				dd DTS_SHOWNONE
				dd DTS_SHOWNONE
				db 'DTS_SHOWNONE',0
				dd DTS_SHORTDATEFORMAT
				dd DTS_LONGDATEFORMAT
				db 'DTS_SHORTDATEFORMAT',0
				dd DTS_LONGDATEFORMAT
				dd DTS_LONGDATEFORMAT
				db 'DTS_LONGDATEFORMAT',0
				dd DTS_TIMEFORMAT
				dd DTS_TIMEFORMAT
				db 'DTS_TIMEFORMAT',0
				dd DTS_APPCANPARSE
				dd DTS_APPCANPARSE
				db 'DTS_APPCANPARSE',0
				dd DTS_RIGHTALIGN
				dd DTS_RIGHTALIGN
				db 'DTS_RIGHTALIGN',0
				dd ES_AUTOHSCROLL
				dd ES_AUTOHSCROLL
				db 'ES_AUTOHSCROLL',0
				dd ES_AUTOVSCROLL
				dd ES_AUTOVSCROLL
				db 'ES_AUTOVSCROLL',0
				dd ES_CENTER
				dd 03h
				db 'ES_CENTER',0
				dd ES_DISABLENOSCROLL
				dd ES_DISABLENOSCROLL
				db 'ES_DISABLENOSCROLL',0
				dd ES_LEFT
				dd 03h
				db 'ES_LEFT',0
				dd ES_LOWERCASE
				dd 018h
				db 'ES_LOWERCASE',0
				dd ES_MULTILINE
				dd ES_MULTILINE
				db 'ES_MULTILINE',0
				dd ES_NOHIDESEL
				dd ES_NOHIDESEL
				db 'ES_NOHIDESEL',0
				dd ES_NUMBER
				dd ES_NUMBER
				db 'ES_NUMBER',0
				dd ES_OEMCONVERT
				dd ES_OEMCONVERT
				db 'ES_OEMCONVERT',0
				dd ES_PASSWORD
				dd ES_PASSWORD
				db 'ES_PASSWORD',0
				dd ES_READONLY
				dd ES_READONLY
				db 'ES_READONLY',0
				dd ES_RIGHT
				dd 03h
				db 'ES_RIGHT',0
				dd ES_SAVESEL
				dd ES_SAVESEL
				db 'ES_SAVESEL',0
				dd ES_SELECTIONBAR
				dd ES_SELECTIONBAR
				db 'ES_SELECTIONBAR',0
				dd ES_SUNKEN
				dd ES_SUNKEN
				db 'ES_SUNKEN',0
				dd ES_UPPERCASE
				dd 018h
				db 'ES_UPPERCASE',0
				dd ES_VERTICAL
				dd ES_VERTICAL
				db 'ES_VERTICAL',0
				dd ES_WANTRETURN
				dd ES_WANTRETURN
				db 'ES_WANTRETURN',0
				dd HDS_BUTTONS
				dd HDS_BUTTONS
				db 'HDS_BUTTONS',0
				dd HDS_DRAGDROP
				dd HDS_DRAGDROP
				db 'HDS_DRAGDROP',0
				dd HDS_FILTERBAR
				dd HDS_FILTERBAR
				db 'HDS_FILTERBAR',0
				dd HDS_FULLDRAG
				dd HDS_FULLDRAG
				db 'HDS_FULLDRAG',0
				dd HDS_HIDDEN
				dd HDS_HIDDEN
				db 'HDS_HIDDEN',0
				dd HDS_HORZ
				dd HDS_HORZ
				db 'HDS_HORZ',0
				dd HDS_HOTTRACK
				dd HDS_HOTTRACK
				db 'HDS_HOTTRACK',0
				dd LBS_DISABLENOSCROLL
				dd LBS_DISABLENOSCROLL
				db 'LBS_DISABLENOSCROLL',0
				dd LBS_EXTENDEDSEL
				dd LBS_EXTENDEDSEL
				db 'LBS_EXTENDEDSEL',0
				dd LBS_HASSTRINGS
				dd LBS_HASSTRINGS
				db 'LBS_HASSTRINGS',0
				dd LBS_MULTICOLUMN
				dd LBS_MULTICOLUMN
				db 'LBS_MULTICOLUMN',0
				dd LBS_MULTIPLESEL
				dd LBS_MULTIPLESEL
				db 'LBS_MULTIPLESEL',0
				dd LBS_NODATA
				dd LBS_NODATA
				db 'LBS_NODATA',0
				dd LBS_NOINTEGRALHEIGHT
				dd LBS_NOINTEGRALHEIGHT
				db 'LBS_NOINTEGRALHEIGHT',0
				dd LBS_NOREDRAW
				dd LBS_NOREDRAW
				db 'LBS_NOREDRAW',0
				dd LBS_NOTIFY
				dd LBS_NOTIFY
				db 'LBS_NOTIFY',0
				dd LBS_OWNERDRAWFIXED
				dd LBS_OWNERDRAWFIXED
				db 'LBS_OWNERDRAWFIXED',0
				dd LBS_OWNERDRAWVARIABLE
				dd LBS_OWNERDRAWVARIABLE
				db 'LBS_OWNERDRAWVARIABLE',0
				dd LBS_SORT
				dd LBS_SORT
				db 'LBS_SORT',0
				dd LBS_STANDARD
				dd LBS_STANDARD
				db 'LBS_STANDARD',0
				dd LBS_USETABSTOPS
				dd LBS_USETABSTOPS
				db 'LBS_USETABSTOPS',0
				dd LBS_WANTKEYBOARDINPUT
				dd LBS_WANTKEYBOARDINPUT
				db 'LBS_WANTKEYBOARDINPUT',0
				dd LVS_ICON
				dd 03h
				db 'LVS_ICON',0
				dd LVS_REPORT
				dd 03h
				db 'LVS_REPORT',0
				dd LVS_SMALLICON
				dd 03h
				db 'LVS_SMALLICON',0
				dd LVS_LIST
				dd 03h
				db 'LVS_LIST',0
				dd LVS_SINGLESEL
				dd LVS_SINGLESEL
				db 'LVS_SINGLESEL',0
				dd LVS_SHOWSELALWAYS
				dd LVS_SHOWSELALWAYS
				db 'LVS_SHOWSELALWAYS',0
				dd LVS_SORTASCENDING
				dd LVS_SORTASCENDING
				db 'LVS_SORTASCENDING',0
				dd LVS_SORTDESCENDING
				dd LVS_SORTDESCENDING
				db 'LVS_SORTDESCENDING',0
				dd LVS_SHAREIMAGELISTS
				dd LVS_SHAREIMAGELISTS
				db 'LVS_SHAREIMAGELISTS',0
				dd LVS_NOLABELWRAP
				dd LVS_NOLABELWRAP
				db 'LVS_NOLABELWRAP',0
				dd LVS_AUTOARRANGE
				dd LVS_AUTOARRANGE
				db 'LVS_AUTOARRANGE',0
				dd LVS_EDITLABELS
				dd LVS_EDITLABELS
				db 'LVS_EDITLABELS',0
				dd LVS_NOSCROLL
				dd LVS_NOSCROLL
				db 'LVS_NOSCROLL',0
				dd LVS_ALIGNTOP
				dd LVS_ALIGNLEFT
				db 'LVS_ALIGNTOP',0
				dd LVS_ALIGNLEFT
				dd LVS_ALIGNLEFT
				db 'LVS_ALIGNLEFT',0
				dd LVS_OWNERDRAWFIXED
				dd LVS_OWNERDRAWFIXED
				db 'LVS_OWNERDRAWFIXED',0
				dd LVS_NOCOLUMNHEADER
				dd LVS_NOCOLUMNHEADER
				db 'LVS_NOCOLUMNHEADER',0
				dd LVS_NOSORTHEADER
				dd LVS_NOSORTHEADER
				db 'LVS_NOSORTHEADER',0
				dd LVS_OWNERDATA
				dd LVS_OWNERDATA
				db 'LVS_OWNERDATA',0

				dd LWS_IGNORERETURN
				dd LWS_IGNORERETURN
				db 'LWS_IGNORERETURN',0
				dd LWS_NOPREFIX
				dd LWS_NOPREFIX
				db 'LWS_NOPREFIX',0
				dd LWS_RIGHT
				dd LWS_RIGHT
				db 'LWS_RIGHT',0
				dd LWS_TRANSPARENT
				dd LWS_TRANSPARENT
				db 'LWS_TRANSPARENT',0
				dd LWS_USECUSTOMTEXT
				dd LWS_USECUSTOMTEXT
				db 'LWS_USECUSTOMTEXT',0
				dd LWS_USEVISUALSTYLE
				dd LWS_USEVISUALSTYLE
				db 'LWS_USEVISUALSTYLE',0

				dd MCS_DAYSTATE
				dd MCS_DAYSTATE
				db 'MCS_DAYSTATE',0
				dd MCS_MULTISELECT
				dd MCS_MULTISELECT
				db 'MCS_MULTISELECT',0
				dd MCS_NOTODAY
				dd MCS_NOTODAY
				db 'MCS_NOTODAY',0
				dd MCS_NOTODAYCIRCLE
				dd MCS_NOTODAYCIRCLE
				db 'MCS_NOTODAYCIRCLE',0
				dd MCS_WEEKNUMBERS
				dd MCS_WEEKNUMBERS
				db 'MCS_WEEKNUMBERS',0
				dd PBS_SMOOTH
				dd PBS_SMOOTH
				db 'PBS_SMOOTH',0
				dd PBS_VERTICAL
				dd PBS_VERTICAL
				db 'PBS_VERTICAL',0
				dd PGS_VERT
				dd PGS_VERT
				db 'PGS_VERT',0
				dd PGS_HORZ
				dd PGS_HORZ
				db 'PGS_HORZ',0
				dd PGS_AUTOSCROLL
				dd PGS_AUTOSCROLL
				db 'PGS_AUTOSCROLL',0
				dd PGS_DRAGNDROP
				dd PGS_DRAGNDROP
				db 'PGS_DRAGNDROP',0
				dd RBS_TOOLTIPS
				dd RBS_TOOLTIPS
				db 'RBS_TOOLTIPS',0
				dd RBS_VARHEIGHT
				dd RBS_VARHEIGHT
				db 'RBS_VARHEIGHT',0
				dd RBS_BANDBORDERS
				dd RBS_BANDBORDERS
				db 'RBS_BANDBORDERS',0
				dd RBS_FIXEDORDER
				dd RBS_FIXEDORDER
				db 'RBS_FIXEDORDER',0
				dd RBS_REGISTERDROP
				dd RBS_REGISTERDROP
				db 'RBS_REGISTERDROP',0
				dd RBS_AUTOSIZE
				dd RBS_AUTOSIZE
				db 'RBS_AUTOSIZE',0
				dd RBS_VERTICALGRIPPER
				dd RBS_VERTICALGRIPPER
				db 'RBS_VERTICALGRIPPER',0
				dd RBS_DBLCLKTOGGLE
				dd RBS_DBLCLKTOGGLE
				db 'RBS_DBLCLKTOGGLE',0
				dd SBS_BOTTOMALIGN
				dd SBS_BOTTOMALIGN
				db 'SBS_BOTTOMALIGN',0
				dd SBS_HORZ
				dd SBS_HORZ
				db 'SBS_HORZ',0
				dd SBS_LEFTALIGN
				dd SBS_LEFTALIGN
				db 'SBS_LEFTALIGN',0
				dd SBS_RIGHTALIGN
				dd SBS_RIGHTALIGN
				db 'SBS_RIGHTALIGN',0
				dd SBS_SIZEBOX
				dd SBS_SIZEBOX
				db 'SBS_SIZEBOX',0
				dd SBS_SIZEBOXBOTTOMRIGHTALIGN
				dd SBS_SIZEBOXBOTTOMRIGHTALIGN
				db 'SBS_SIZEBOXBOTTOMRIGHTALIGN',0
				dd SBS_SIZEBOXTOPLEFTALIGN
				dd SBS_SIZEBOXTOPLEFTALIGN
				db 'SBS_SIZEBOXTOPLEFTALIGN',0
				dd SBS_SIZEGRIP
				dd SBS_SIZEGRIP
				db 'SBS_SIZEGRIP',0
				dd SBS_TOPALIGN
				dd SBS_TOPALIGN
				db 'SBS_TOPALIGN',0
				dd SBS_VERT
				dd SBS_VERT
				db 'SBS_VERT',0
				dd SS_BITMAP
				dd 01Fh
				db 'SS_BITMAP',0
				dd SS_BLACKFRAME
				dd 01Fh
				db 'SS_BLACKFRAME',0
				dd SS_BLACKRECT
				dd 01Fh
				db 'SS_BLACKRECT',0
				dd SS_CENTER
				dd 01Fh
				db 'SS_CENTER',0
				dd SS_CENTERIMAGE
				dd 200h
				db 'SS_CENTERIMAGE',0
				dd SS_ETCHEDHORZ
				dd 01Fh
				db 'SS_ETCHEDHORZ',0
				dd SS_ETCHEDFRAME
				dd 01Fh
				db 'SS_ETCHEDFRAME',0
				dd SS_ETCHEDVERT
				dd 01Fh
				db 'SS_ETCHEDVERT',0
				dd SS_GRAYFRAME
				dd 01Fh
				db 'SS_GRAYFRAME',0
				dd SS_GRAYRECT
				dd 01Fh
				db 'SS_GRAYRECT',0
				dd SS_ICON
				dd 01Fh
				db 'SS_ICON',0
				dd SS_LEFT
				dd 01Fh
				db 'SS_LEFT',0
				dd SS_LEFTNOWORDWRAP
				dd 01Fh
				db 'SS_LEFTNOWORDWRAP',0
				dd SS_NOPREFIX
				dd SS_NOPREFIX
				db 'SS_NOPREFIX',0
				dd SS_RIGHT
				dd 01Fh
				db 'SS_RIGHT',0
				dd SS_SIMPLE
				dd 01Fh
				db 'SS_SIMPLE',0
				dd SS_USERITEM
				dd 01Fh
				db 'SS_USERITEM',0
				dd SS_WHITEFRAME
				dd 01Fh
				db 'SS_WHITEFRAME',0
				dd SS_WHITERECT
				dd 01Fh
				db 'SS_WHITERECT',0
				dd TBSTYLE_TOOLTIPS
				dd TBSTYLE_TOOLTIPS
				db 'TBSTYLE_TOOLTIPS',0
				dd TBSTYLE_WRAPABLE
				dd TBSTYLE_WRAPABLE
				db 'TBSTYLE_WRAPABLE',0
				dd TBSTYLE_ALTDRAG
				dd TBSTYLE_ALTDRAG
				db 'TBSTYLE_ALTDRAG',0
				dd TBSTYLE_FLAT
				dd TBSTYLE_FLAT
				db 'TBSTYLE_FLAT',0
				dd TBSTYLE_LIST
				dd TBSTYLE_LIST
				db 'TBSTYLE_LIST',0
				dd TBSTYLE_CUSTOMERASE
				dd TBSTYLE_CUSTOMERASE
				db 'TBSTYLE_CUSTOMERASE',0
				dd TBSTYLE_REGISTERDROP
				dd TBSTYLE_REGISTERDROP
				db 'TBSTYLE_REGISTERDROP',0
				dd TBSTYLE_TRANSPARENT
				dd TBSTYLE_TRANSPARENT
				db 'TBSTYLE_TRANSPARENT',0
				dd TBSTYLE_AUTOSIZE
				dd TBSTYLE_AUTOSIZE
				db 'TBSTYLE_AUTOSIZE',0
				dd TBS_AUTOTICKS
				dd TBS_AUTOTICKS
				db 'TBS_AUTOTICKS',0
				dd TBS_VERT
				dd TBS_VERT
				db 'TBS_VERT',0
				dd TBS_HORZ
				dd TBS_HORZ
				db 'TBS_HORZ',0
				dd TBS_TOP
				dd TBS_TOP
				db 'TBS_TOP',0
				dd TBS_BOTTOM
				dd TBS_BOTTOM
				db 'TBS_BOTTOM',0
				dd TBS_LEFT
				dd TBS_LEFT
				db 'TBS_LEFT',0
				dd TBS_RIGHT
				dd TBS_RIGHT
				db 'TBS_RIGHT',0
				dd TBS_BOTH
				dd TBS_BOTH
				db 'TBS_BOTH',0
				dd TBS_NOTICKS
				dd TBS_NOTICKS
				db 'TBS_NOTICKS',0
				dd TBS_ENABLESELRANGE
				dd TBS_ENABLESELRANGE
				db 'TBS_ENABLESELRANGE',0
				dd TBS_FIXEDLENGTH
				dd TBS_FIXEDLENGTH
				db 'TBS_FIXEDLENGTH',0
				dd TBS_NOTHUMB
				dd TBS_NOTHUMB
				db 'TBS_NOTHUMB',0
				dd TBS_TOOLTIPS
				dd TBS_TOOLTIPS
				db 'TBS_TOOLTIPS',0
				dd TBS_DOWNISLEFT
				dd TBS_DOWNISLEFT
				db 'TBS_DOWNISLEFT',0
				dd TBS_NOTIFYBEFOREMOVE
				dd TBS_NOTIFYBEFOREMOVE
				db 'TBS_NOTIFYBEFOREMOVE',0
				dd TBS_TRANSPARENTBKGND
				dd TBS_TRANSPARENTBKGND
				db 'TBS_TRANSPARENTBKGND',0
				dd TCS_SCROLLOPPOSITE
				dd TCS_SCROLLOPPOSITE
				db 'TCS_SCROLLOPPOSITE',0
				dd TCS_BOTTOM
				dd TCS_BOTTOM
				db 'TCS_BOTTOM',0
				dd TCS_BOTTOM
				dd TCS_BOTTOM
				db 'TCS_RIGHT',0
				dd TCS_MULTISELECT
				dd TCS_MULTISELECT
				db 'TCS_MULTISELECT',0
				dd TCS_FLATBUTTONS
				dd TCS_FLATBUTTONS
				db 'TCS_FLATBUTTONS',0
				dd TCS_FORCEICONLEFT
				dd TCS_FORCEICONLEFT
				db 'TCS_FORCEICONLEFT',0
				dd TCS_FORCELABELLEFT
				dd TCS_FORCELABELLEFT
				db 'TCS_FORCELABELLEFT',0
				dd TCS_HOTTRACK
				dd TCS_HOTTRACK
				db 'TCS_HOTTRACK',0
				dd TCS_VERTICAL
				dd TCS_VERTICAL
				db 'TCS_VERTICAL',0
				dd TCS_TABS
				dd TCS_TABS
				db 'TCS_TABS',0
				dd TCS_BUTTONS
				dd TCS_BUTTONS
				db 'TCS_BUTTONS',0
				dd TCS_SINGLELINE
				dd TCS_SINGLELINE
				db 'TCS_SINGLELINE',0
				dd TCS_MULTILINE
				dd TCS_MULTILINE
				db 'TCS_MULTILINE',0
				dd TCS_RIGHTJUSTIFY
				dd TCS_RIGHTJUSTIFY
				db 'TCS_RIGHTJUSTIFY',0
				dd TCS_FIXEDWIDTH
				dd TCS_FIXEDWIDTH
				db 'TCS_FIXEDWIDTH',0
				dd TCS_RAGGEDRIGHT
				dd TCS_RAGGEDRIGHT
				db 'TCS_RAGGEDRIGHT',0
				dd TCS_FOCUSONBUTTONDOWN
				dd TCS_FOCUSONBUTTONDOWN
				db 'TCS_FOCUSONBUTTONDOWN',0
				dd TCS_OWNERDRAWFIXED
				dd TCS_OWNERDRAWFIXED
				db 'TCS_OWNERDRAWFIXED',0
				dd TCS_TOOLTIPS
				dd TCS_TOOLTIPS
				db 'TCS_TOOLTIPS',0
				dd TCS_FOCUSNEVER
				dd TCS_FOCUSNEVER
				db 'TCS_FOCUSNEVER',0
				dd TVS_HASBUTTONS
				dd TVS_HASBUTTONS
				db 'TVS_HASBUTTONS',0
				dd TVS_HASLINES
				dd TVS_HASLINES
				db 'TVS_HASLINES',0
				dd TVS_LINESATROOT
				dd TVS_LINESATROOT
				db 'TVS_LINESATROOT',0
				dd TVS_EDITLABELS
				dd TVS_EDITLABELS
				db 'TVS_EDITLABELS',0
				dd TVS_DISABLEDRAGDROP
				dd TVS_DISABLEDRAGDROP
				db 'TVS_DISABLEDRAGDROP',0
				dd TVS_SHOWSELALWAYS
				dd TVS_SHOWSELALWAYS
				db 'TVS_SHOWSELALWAYS',0
				dd TVS_RTLREADING
				dd TVS_RTLREADING
				db 'TVS_RTLREADING',0
				dd TVS_NOTOOLTIPS
				dd TVS_NOTOOLTIPS
				db 'TVS_NOTOOLTIPS',0
				dd TVS_CHECKBOXES
				dd TVS_CHECKBOXES
				db 'TVS_CHECKBOXES',0
				dd TVS_TRACKSELECT
				dd TVS_TRACKSELECT
				db 'TVS_TRACKSELECT',0
				dd TVS_SINGLEEXPAND
				dd TVS_SINGLEEXPAND
				db 'TVS_SINGLEEXPAND',0
				dd TVS_INFOTIP
				dd TVS_INFOTIP
				db 'TVS_INFOTIP',0
				dd TVS_FULLROWSELECT
				dd TVS_FULLROWSELECT
				db 'TVS_FULLROWSELECT',0
				dd TVS_NOSCROLL
				dd TVS_NOSCROLL
				db 'TVS_NOSCROLL',0
				dd TVS_NONEVENHEIGHT
				dd TVS_NONEVENHEIGHT
				db 'TVS_NONEVENHEIGHT',0
				dd TVS_NOHSCROLL
				dd TVS_NOHSCROLL
				db 'TVS_NOHSCROLL',0
				dd UDS_WRAP
				dd UDS_WRAP
				db 'UDS_WRAP',0
				dd UDS_SETBUDDYINT
				dd UDS_SETBUDDYINT
				db 'UDS_SETBUDDYINT',0
				dd UDS_ALIGNRIGHT
				dd UDS_ALIGNRIGHT
				db 'UDS_ALIGNRIGHT',0
				dd UDS_ALIGNLEFT
				dd UDS_ALIGNLEFT
				db 'UDS_ALIGNLEFT',0
				dd UDS_AUTOBUDDY
				dd UDS_AUTOBUDDY
				db 'UDS_AUTOBUDDY',0
				dd UDS_ARROWKEYS
				dd UDS_ARROWKEYS
				db 'UDS_ARROWKEYS',0
				dd UDS_HORZ
				dd UDS_HORZ
				db 'UDS_HORZ',0
				dd UDS_NOTHOUSANDS
				dd UDS_NOTHOUSANDS
				db 'UDS_NOTHOUSANDS',0
				dd UDS_HOTTRACK
				dd UDS_HOTTRACK
				db 'UDS_HOTTRACK',0
				dd WS_BORDER
				dd WS_CAPTION
				db 'WS_BORDER',0
				dd WS_CAPTION
				dd WS_CAPTION
				db 'WS_CAPTION',0
				dd WS_CHILD
				dd WS_POPUP or WS_CHILD
				db 'WS_CHILD',0
;				dd WS_CHILDWINDOW
;				dd WS_POPUP or WS_CHILD
;				db 'WS_CHILDWINDOW',0
				dd WS_CLIPCHILDREN
				dd WS_CLIPCHILDREN
				db 'WS_CLIPCHILDREN',0
				dd WS_CLIPSIBLINGS
				dd WS_CLIPSIBLINGS
				db 'WS_CLIPSIBLINGS',0
				dd WS_DISABLED
				dd WS_DISABLED
				db 'WS_DISABLED',0
				dd WS_DLGFRAME
				dd WS_CAPTION
				db 'WS_DLGFRAME',0
				dd WS_GROUP
				dd WS_GROUP
				db 'WS_GROUP',0
				dd WS_HSCROLL
				dd WS_HSCROLL
				db 'WS_HSCROLL',0
				dd WS_ICONIC
				dd WS_ICONIC
				db 'WS_ICONIC',0
				dd WS_MAXIMIZE
				dd WS_MAXIMIZE
				db 'WS_MAXIMIZE',0
				dd WS_MINIMIZE
				dd WS_MINIMIZE
				db 'WS_MINIMIZE',0
;				dd WS_OVERLAPPED
;				dd WS_OVERLAPPED
;				db 'WS_OVERLAPPED',0
				dd WS_OVERLAPPEDWINDOW
				dd WS_OVERLAPPEDWINDOW
				db 'WS_OVERLAPPEDWINDOW',0
				dd WS_POPUP
				dd WS_POPUP or WS_CHILD
				db 'WS_POPUP',0
;				dd WS_POPUPWINDOW
;				dd WS_POPUP or WS_CHILD
;				db 'WS_POPUPWINDOW',0
				dd WS_SIZEBOX
				dd WS_SIZEBOX
				db 'WS_SIZEBOX',0
				dd WS_SYSMENU
				dd WS_SYSMENU
				db 'WS_SYSMENU',0
				dd WS_TABSTOP
				dd WS_TABSTOP
				db 'WS_TABSTOP',0
				dd WS_THICKFRAME
				dd WS_THICKFRAME
				db 'WS_THICKFRAME',0
;				dd WS_TILED
;				dd WS_TILED
;				db 'WS_TILED',0
;				dd WS_TILEDWINDOW
;				dd WS_TILEDWINDOW
;				db 'WS_TILEDWINDOW',0
				dd WS_VISIBLE
				dd WS_VISIBLE
				db 'WS_VISIBLE',0
				dd WS_VSCROLL
				dd WS_VSCROLL
				db 'WS_VSCROLL',0
				dd 0,0
				db 0

exstyledef		dd WS_EX_ACCEPTFILES
				dd WS_EX_ACCEPTFILES
				db 'WS_EX_ACCEPTFILES',0
				dd WS_EX_APPWINDOW
				dd WS_EX_APPWINDOW
				db 'WS_EX_APPWINDOW',0
				dd WS_EX_CLIENTEDGE
				dd WS_EX_CLIENTEDGE
				db 'WS_EX_CLIENTEDGE',0
				dd WS_EX_CONTEXTHELP
				dd WS_EX_CONTEXTHELP
				db 'WS_EX_CONTEXTHELP',0
				dd WS_EX_CONTROLPARENT
				dd WS_EX_CONTROLPARENT
				db 'WS_EX_CONTROLPARENT',0
				dd WS_EX_DLGMODALFRAME
				dd WS_EX_DLGMODALFRAME
				db 'WS_EX_DLGMODALFRAME',0
				dd WS_EX_LAYERED
				dd WS_EX_LAYERED
				db 'WS_EX_LAYERED',0
				dd WS_EX_LEFT
				dd WS_EX_RIGHT
				db 'WS_EX_LEFT',0
				dd WS_EX_LEFTSCROLLBAR
				dd WS_EX_LEFTSCROLLBAR
				db 'WS_EX_LEFTSCROLLBAR',0
				dd WS_EX_LTRREADING
				dd WS_EX_RTLREADING
				db 'WS_EX_LTRREADING',0
				dd WS_EX_MDICHILD
				dd WS_EX_MDICHILD
				db 'WS_EX_MDICHILD',0
				dd WS_EX_NOPARENTNOTIFY
				dd WS_EX_NOPARENTNOTIFY
				db 'WS_EX_NOPARENTNOTIFY',0
				dd WS_EX_OVERLAPPEDWINDOW
				dd WS_EX_OVERLAPPEDWINDOW
				db 'WS_EX_OVERLAPPEDWINDOW',0
				dd WS_EX_PALETTEWINDOW
				dd WS_EX_PALETTEWINDOW
				db 'WS_EX_PALETTEWINDOW',0
				dd WS_EX_RIGHT
				dd WS_EX_RIGHT
				db 'WS_EX_RIGHT',0
				dd WS_EX_RIGHTSCROLLBAR
				dd WS_EX_LEFTSCROLLBAR
				db 'WS_EX_RIGHTSCROLLBAR',0
				dd WS_EX_RTLREADING
				dd WS_EX_RTLREADING
				db 'WS_EX_RTLREADING',0
				dd WS_EX_STATICEDGE
				dd WS_EX_STATICEDGE
				db 'WS_EX_STATICEDGE',0
				dd WS_EX_TOOLWINDOW
				dd WS_EX_TOOLWINDOW
				db 'WS_EX_TOOLWINDOW',0
				dd WS_EX_TOPMOST
				dd WS_EX_TOPMOST
				db 'WS_EX_TOPMOST',0
				dd WS_EX_TRANSPARENT
				dd WS_EX_TRANSPARENT
				db 'WS_EX_TRANSPARENT',0
				dd WS_EX_WINDOWEDGE
				dd WS_EX_WINDOWEDGE
				db 'WS_EX_WINDOWEDGE',0
				dd 0,0
				db 0
