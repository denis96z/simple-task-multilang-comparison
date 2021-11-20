BIN_DIR := $(PWD)/bin

.PHONY: fmt
fmt:
	go fmt $(PWD)/...

.PHONY: proj-1
proj-1: main1.go
	go build -o $(BIN_DIR)/proj-1 $(PWD)/main1.go

.PHONY: proj-2
proj-2: main2.go
	go build -o $(BIN_DIR)/proj-2 $(PWD)/main2.go
