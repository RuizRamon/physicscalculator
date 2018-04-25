(UMLStudio "8.0" project)
(repository "" 0)
(notation "UML2.1.not")
(genProfile 50 "C++" ("" "" "" "" "") "" 0 ("" "" "" "" "") ("" "" "" "" "") 
            1022 360 300 333 70 50 80 50 80 60 0 1)
(codeFiles)
(docFiles)
(otherFiles)
(revFiles "C++" "C:\Users\admin\Documents\GitHub\physicscalculator\Book.cpp" 
          "C:\Users\admin\Documents\GitHub\physicscalculator\Book.h" 
          "C:\Users\admin\Documents\GitHub\physicscalculator\Calculator.cpp" 
          "C:\Users\admin\Documents\GitHub\physicscalculator\Calculator.h" 
          "C:\Users\admin\Documents\GitHub\physicscalculator\Chapter.cpp" 
          "C:\Users\admin\Documents\GitHub\physicscalculator\Chapter.h" 
          "C:\Users\admin\Documents\GitHub\physicscalculator\main.cpp" 
          "C:\Users\admin\Documents\GitHub\physicscalculator\Problem.cpp" 
          "C:\Users\admin\Documents\GitHub\physicscalculator\Problem.h")
(masters (master "^")!/.s5(!wL9c6!" 1 4 "Problem" "" "" "" "Solver" "" 1 
                 (("problemText" "string" "" "" "" "/ vector<string> prompts;" 
                                 3 16 "$)!/.s5(!wL9c6!") 
                  ("numProblem" "int" "" "" "" "" 3 16 "%)!/.s5(!wL9c6!") 
                  ("page" "int" "" "" "" "" 3 16 "&)!/.s5(!wL9c6!") 
                  ("varPrompts" "vector<<string>" "" "" "" "" 3 16 
                                "')!/.s5(!wL9c6!") 
                  ("vars" "vector<<double>" "" "" "" "" 3 16 "()!/.s5(!wL9c6!") 
                  ("answerPrompts" "vector<<string>" "" "" "" "" 3 16 
                                   "))!/.s5(!wL9c6!") 
                  ("answers" "vector<<double>" "" "" "" "" 3 16 
                             "*)!/.s5(!wL9c6!")) 
                 (("promptVar" "void" "" 3 16 nil nil "+)!/.s5(!wL9c6!" "") 
                  ("displayAns" "void" "" 3 16 nil nil ",)!/.s5(!wL9c6!" "") 
                  ("initProblem" "void" "" 3 16 nil nil "-)!/.s5(!wL9c6!" "") 
                  ("solve" "void" "" 3 16 (("num" "int" "" 0)) nil 
                           ".)!/.s5(!wL9c6!" "") 
                  ("addVarPrompt" "void" "" 3 16 (("p" "string" "" 0)) nil 
                                  "/)!/.s5(!wL9c6!" "") 
                  ("addAnsPrompt" "void" "" 3 16 (("ap" "string" "" 0)) nil 
                                  "0)!/.s5(!wL9c6!" "") 
                  ("Problem" "" "" 3 16 (("text" "string" "" 0)) nil 
                             "1)!/.s5(!wL9c6!" "") 
                  ("Problem" "" "" 3 16 
                             (("numProb" "int" "" 0) ("text" "string" "" 0) 
                              ("page" "int" "" 0) 
                              ("varPrompts" "vector<<string>" "" 0) 
                              ("ansPrompts" "vector<<string>" "" 0)) nil 
                             "2)!/.s5(!wL9c6!" "") 
                  ("Problem" "" "" 3 16 nil nil "3)!/.s5(!wL9c6!" "") 
                  ("~Problem" "" "" 3 16 nil nil "4)!/.s5(!wL9c6!" "")) nil 
                 nil nil 10 "") 
         (master "r(!/.s5(!wL9c6!" 1 4 "Book" "" "" "" "Solver" "" 1 
                 (("path" "string" "" "" "" "/path to pdf file" 3 16 
                          "t(!/.s5(!wL9c6!") 
                  ("pathManual" "string" "" "" "" "/path to manual of book" 3 
                                16 "u(!/.s5(!wL9c6!") 
                  ("name" "string" "" "" "" "/name of book" 3 16 
                          "v(!/.s5(!wL9c6!") 
                  ("searchAppend" "string" "" "" "" "" 3 18 "w(!/.s5(!wL9c6!") 
                  ("pageAppend" "string" "" "" "" "" 3 18 "x(!/.s5(!wL9c6!") 
                  ("chapters" "vector<<Chapter>" "" "" "" 
                              "/vector of chapters" 3 16 "y(!/.s5(!wL9c6!")) 
                 (("openPage" "void" "" 3 16 (("manual" "bool" "" 0)) nil 
                              "z(!/.s5(!wL9c6!" "") 
                  ("initBook" "void" "" 3 16 nil nil "{(!/.s5(!wL9c6!" "") 
                  ("addChapter" "void" "" 3 16 (("problems" "int" "" 0)) nil 
                                "|(!/.s5(!wL9c6!" "") 
                  ("getChapter" "Chapter&" "" 3 16 (("n" "int" "" 0)) nil 
                                "}(!/.s5(!wL9c6!" "") 
                  ("Book" "" "" 3 16 (("choice" "int" "" 0)) nil 
                          "~(!/.s5(!wL9c6!" "") 
                  ("~Book" "" "" 3 16 nil nil "!)!/.s5(!wL9c6!" "")) nil nil 
                 nil 10 "") 
         (master "W(!/.s5(!wL9c6!" 1 4 "Calculator" "" "" "" "Solver" "" 1 
                 (("choice" "int" "" "" "" "" 1 16 "Y(!/.s5(!wL9c6!") 
                  ("chapter" "int" "" "" "" "" 1 16 "Z(!/.s5(!wL9c6!") 
                  ("problem" "int" "" "" "" "" 1 16 "[(!/.s5(!wL9c6!") 
                  ("menu" "int" "" "" "" "" 1 16 "\(!/.s5(!wL9c6!") 
                  ("exit" "bool" "" "" "" "" 1 16 "](!/.s5(!wL9c6!") 
                  ("temp" "double" "" "" "" "" 1 16 " (!/.s5(!wL9c6!") 
                  ("ans" "double*" "" "" "" "" 1 16 "_(!/.s5(!wL9c6!") 
                  ("var" "double*" "" "" "" "" 1 16 "`(!/.s5(!wL9c6!") 
                  ("t" "int*" "" "" "" "" 1 16 "a(!/.s5(!wL9c6!") 
                  ("books" "vector<<Book>" "" "" "" "/Bruno" 1 16 
                           "b(!/.s5(!wL9c6!") 
                  ("pdfPath" "string" "" "" "" "/Bruno" 3 16 "c(!/.s5(!wL9c6!") 
                  ("browserPath" "string" "" "" "" "" 3 16 "d(!/.s5(!wL9c6!") 
                  ("currentBook" "int" "" "" "" "" 3 16 "l(!/.s5(!wL9c6!")) 
                 (("menuprint" "void" "" 3 16 nil nil "e(!/.s5(!wL9c6!" "") 
                  ("choices" "void" "" 3 16 nil nil "f(!/.s5(!wL9c6!" "") 
                  ("startup" "void" "" 3 16 
                             (("lpApplicationName" "LPCTSTR" "" 0)) nil 
                             "g(!/.s5(!wL9c6!" "") 
                  ("openBook" "void" "/Bruno" 3 16 
                              (("pageNum" "int" "" 0) ("manual" "bool" "" 0)) 
                              nil "h(!/.s5(!wL9c6!" "") 
                  ("searchBook" "void" "" 3 16 
                                (("ch" "int" "" 0) ("pr" "int" "" 0)) nil 
                                "i(!/.s5(!wL9c6!" "") 
                  ("displayBooks" "void" "" 3 16 nil nil "j(!/.s5(!wL9c6!" "") 
                  ("librarySize" "int" "" 3 16 nil nil "k(!/.s5(!wL9c6!" "") 
                  ("nowBook" "Book&" "" 3 16 nil nil "m(!/.s5(!wL9c6!" "") 
                  ("getPage" "string" "" 3 16 (("page" "int" "" 0)) nil 
                             "n(!/.s5(!wL9c6!" "") 
                  ("Calculator" "" "" 3 16 
                                (("path" "string" "" 0) 
                                 ("browser" "string" "" 0)) nil 
                                "o(!/.s5(!wL9c6!" "") 
                  ("~Calculator" "" "" 3 16 nil nil "p(!/.s5(!wL9c6!" "") 
                  ("initCalc" "void" "" 3 16 nil nil "q(!/.s5(!wL9c6!" "")) 
                 nil nil nil 10 "") 
         (master "N(!/.s5(!wL9c6!" 1 4 "Chapter" "" "" "" "Solver" "" 1 
                 (("problems" "vector<<Problem>" "" "" "" "" 3 16 
                              "P(!/.s5(!wL9c6!") 
                  ("numProbs" "int" "" "" "" "" 3 16 "Q(!/.s5(!wL9c6!")) 
                 (("getProblem" "Problem&" "" 3 16 (("n" "int" "" 0)) nil 
                                "R(!/.s5(!wL9c6!" "") 
                  ("addProblem" "void" "" 3 16 (("p" "Problem&" "" 0)) nil 
                                "S(!/.s5(!wL9c6!" "") 
                  ("initChapter" "void" "" 3 16 nil nil "T(!/.s5(!wL9c6!" "") 
                  ("Chapter" "" "" 3 16 (("num" "int" "" 0)) nil 
                             "U(!/.s5(!wL9c6!" "") 
                  ("~Chapter" "" "" 3 16 nil nil "V(!/.s5(!wL9c6!" "")) nil 
                 nil nil 10 "") 
         (master "K(!/.s5(!wL9c6!" 1 3 "Solver" "" "" "" "" "" 1 nil nil nil 
                 nil nil 12 "M(!/.s5(!wL9c6!"))
(customModel "J(!r.s5(!wL9c6!" 0 3 "Untitled" "" "" 17 "" "" 1.000000 1.000000 
             (0 0 827 1168) (0 0 827 1168) 
             (place "K(!/.s5(!wL9c6!" (3) "" (junctions) 12 "L(!/.s5(!wL9c6!" 
                    (112 72 188 150) (107 67 193 155) (113 73 159 91) 1 0 
                    (nil 1 -12 33 18 12 18 18) ""))
(customModel "M(!/.s5(!wL9c6!" 11 3 "Solver" "" "" 17 "K(!/.s5(!wL9c6!" 
             "J(!r.s5(!wL9c6!" 1.000000 1.000000 (0 0 1654 1168) 
             (0 0 1654 1168) 
             (place "N(!/.s5(!wL9c6!" (3) "" (junctions) 10 "O(!/.s5(!wL9c6!" 
                    (500 44 664 174) (495 39 669 179) (502 47 662 173) 1 0 
                    ("Consolas" 1 -12 0 18 12 28 0) "") 
             (place "W(!/.s5(!wL9c6!" (3) "" (junctions) 10 "X(!/.s5(!wL9c6!" 
                    (20 36 246 422) (15 31 251 427) (23 41 243 419) 1 0 
                    ("Consolas" 1 -12 0 18 12 16 0) "") 
             (place "r(!/.s5(!wL9c6!" (3) "" (junctions) 10 "s(!/.s5(!wL9c6!" 
                    (288 36 456 240) (283 31 461 245) (290 41 454 237) 1 0 
                    ("Consolas" 1 -12 0 18 12 28 0) "") 
             (place "^")!/.s5(!wL9c6!" (3) "" (junctions) 10 
                    "#)!/.s5(!wL9c6!" (288 276 794 550) (283 271 799 555) 
                    (292 281 790 547) 1 0 ("Consolas" 1 -12 0 18 12 28 0) ""))
