package main

import (
	"fmt"
	"log"
	"os"
	"os/exec"
	"path/filepath"
)

var fileData [][]string

const (
	dirPath       = "codes"
	latexFilePath = "demo.tex"
)

func readFiles() {
	files, err := os.ReadDir(dirPath)
	if err != nil {
		log.Fatalf("Error reading directory: %v\n", err)
	}

	for _, file := range files {
		if file.IsDir() {
			continue
		}

		filePath := filepath.Join(dirPath, file.Name())

		content, err := os.ReadFile(filePath)
		if err != nil {
			log.Printf("Error reading file %s: %v\n", file.Name(), err)
			continue
		}

		sourceCode := string(content)
		fileInfo := []string{file.Name(), sourceCode}
		fileData = append(fileData, fileInfo)

		fmt.Printf("%s\n\n%s\n\n\n\n", fileInfo[0], fileInfo[1])
	}
}

func latex() {
	cmd := exec.Command("xelatex", "-output-directory=output", latexFilePath)
	err := cmd.Run()
	if err != nil {
		log.Fatalf("Error generating PDF: %v\n", err)
	}
}

func main() {
	var choice int

	fmt.Print("Enter a number (1-2): ")
	fmt.Scan(&choice)

	switch choice {
	case 1:
		readFiles()
	case 2:
		latex()
	default:
		fmt.Println("Invalid choice. Please enter a number between 1 and 2.")
	}
}
