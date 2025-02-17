comment_header = '''\
"#","Embroidermodder 2 CSV Embroidery File - Generated with the Embroidermodder 2 CSV Output Inkscape Extension"
"#","http://embroidermodder.github.io"

"#","General Notes:"
"#","This file can be read by Excel or LibreOffice as CSV (Comma Separated Value) or with a text editor."
"#","Lines beginning with # are comments."
"#","Lines beginning with > are variables: [VAR_NAME], [VAR_VALUE]"
"#","Lines beginning with $ are threads: [THREAD_NUMBER], [RED], [GREEN], [BLUE], [DESCRIPTION], [CATALOG_NUMBER]"
"#","Lines beginning with * are stitch entries: [STITCH_TYPE], [X], [Y]"

"#","Stitch Entry Notes:"
"#","STITCH instructs the machine to move to the position [X][Y] and then make a stitch."
"#","JUMP instructs the machine to move to the position [X][Y] without making a stitch."
"#","TRIM instructs the machine to cut the thread before moving to the position [X][Y] without making a stitch."
"#","COLOR instructs the machine to stop temporarily so that the user can change to a different color thread before resuming."
"#","END instructs the machine that the design is completed and there are no further instructions."
"#","UNKNOWN encompasses instructions that may not be supported currently."
"#","[X] and [Y] are absolute coordinates in millimeters (mm)."

'''

comment_variables = '''\
"#","[VAR_NAME]","[VAR_VALUE]"
'''

comment_threads = '''\
"#","[THREAD_NUMBER]","[RED]","[GREEN]","[BLUE]","[DESCRIPTION]","[CATALOG_NUMBER]"
'''

comment_stitches = '''"#","[STITCH_TYPE]","[X]","[Y]"
'''
